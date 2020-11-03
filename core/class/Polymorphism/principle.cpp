#include<iostream>
#include<string>
using namespace std;

//多态原理

class Animal{
public:
    virtual void speak(){
        cout << "animal speaking" << endl;
    }
};

class Cat: public Animal{
public:
    void speak(){
        cout << "cat speaking" << endl;
    }
};

class Dog: public Animal{
public:
    void speak(){
        cout << "dog speaking" << endl;
    }
};

void doSpeak(Animal &animal){
    animal.speak();
}

void test1(){
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}

void test2(){
    cout << "size of animal = " << sizeof(Animal) << endl;
    //未加virtual前为1，加了以后变成了4_32bit(8_64bit)（虚函数指针）vfptr
    //vfptr 指向 vftable
    //Cat继承animal后，也会有一个vfptr指向vftable  (vftable中记录了虚函数地址 &Animal::speak)
    //当子类重写父类的虚函数
    //子类的vftable内的虚函数地址会被子类重写的函数地址覆盖( &Animal::speak 被 &Cat::speak 代替)
    //当父类指针指向或引用(Animal &animal)指向子类对象时，发生多态
    int *p;
    cout << "size of p = " << sizeof(p) << endl;
}

int main(){
    //test1();
    test2();
    //system("pause");
    return 0;
}