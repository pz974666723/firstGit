#include<iostream>
#include<string>
using namespace std;

//虚析构和纯虚析构

class Animal{
public:
    Animal(){
        cout << " animal GZ using" << endl;
    }
    // virtual ~Animal(){
    //     cout << " animal XG using" << endl;
    // }
    virtual ~Animal() = 0;

    virtual void speak() = 0;
};

Animal::~Animal(){
    cout << " animal pureXG using" << endl;
};

class Cat: public Animal{
public:
    Cat(string name){
        cout << " cat GZ using" << endl;
        m_name = new string(name);
    }
    void speak(){
        cout << *m_name << " cat speaking" << endl;
    }

    ~Cat(){
        if (m_name != NULL){
            cout << " cat XG using" << endl;
            delete m_name;
            m_name = NULL;
        }
    }
    string *m_name;
};

void test1(){
    Animal *animal = new Cat("Tom");
    Animal *animal2 = new Cat("God");
    animal->speak();
    animal2->speak();
    //父类指针在析构时，不会调用子类中析构函数，导致子类如果有堆区属性，会出现内存泄漏
    //利用虚析构可解决这一问题可以解决父类指针释放子类对象不干净的问题
    delete animal;
    delete animal2;
}

int main(){
    test1();
    //system("pause");
    return 0;
}