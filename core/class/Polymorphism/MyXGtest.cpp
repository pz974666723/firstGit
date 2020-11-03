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
        m_name = &name;
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
    Cat cat("Tom");
    //cout << &cat << endl;
    Cat cat2("Good");
    //cout << &cat2 << endl;
    Animal *animal = &cat;
    Animal *animal2 = &cat2;
    animal->speak();
    animal2->speak();
}

int main(){
    test1();
    cout << "-";
    cout << "-";
    cout << "-";
    cout << "-";
    //system("pause");
    return 0;
}