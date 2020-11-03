#include<iostream>
#include<string>
using namespace std;

//多态

class Animal{
public:
    virtual void speak(){//加了virtual后，地址不再是在编译时就确定了
        cout << "animal speaking" << endl;
    }
};

class Cat: public Animal{
public:
    //重写speak：函数返回类型 函数名 参数列表 要完全相同 virtual可不加
    void speak(){
        cout << "cat speaking" << endl;
    }
};

class Dog: public Animal{
public:
    //重写speak：函数返回类型 函数名 参数列表 要完全相同
    void speak(){
        cout << "dog speaking" << endl;
    }
};

//执行说话
//父类引用指向子类对象 Animal &animal = cat
//c++中允许子类父类间的转换（子类转化为父类是可以的）
//地址早绑定，编译阶段就确定了函数地址
//如果想使结果为cat speaking,就要使地址晚绑定(在父类中加virtual)
void doSpeak(Animal &animal){
    animal.speak();
}

void test1(){
    Cat cat;
    doSpeak(cat);
    Dog dog;
    doSpeak(dog);
}

int main(){
    test1();
    //system("pause");
    return 0;
}