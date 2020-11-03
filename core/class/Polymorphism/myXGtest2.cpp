#include<iostream>
#include<string>
using namespace std;

//虚析构和纯虚析构

class Animal{
public:
    Animal(){
        cout << " animal GZ using" << endl;
    }
    ~Animal(){
        cout << " animal XG using" << endl;
    }
    virtual void speak() = 0;
};

class Cat: public Animal{
public:
    Cat(string name){
        cout << " cat GZ using" << endl;
        m_name = &name;//浅拷贝
    }
    void speak(){
        cout << *m_name << " cat speaking" << endl;
    }

    ~Cat(){
        cout << " cat XG using" << endl;
    }
    string *m_name;
};

void test1(){
    Animal *animal = new Cat("Tom");
    Animal *animal2 = new Cat("God");
    animal->speak();
    animal2->speak();
    delete animal;
    delete animal2;
}

int main(){
    test1();
    //system("pause");
    return 0;
}