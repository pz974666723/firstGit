#include<iostream>
#include<string>
using namespace std;
/*
静态函数会被很多对象调用
this指针指向被调用的成员函数所属的对象（谁调用它，this指向谁）
this指针隐含在每一个非静态成员函数内
this指针不需要定义，直接使用即可
用途：
    1.当形参和成员变量同名时，可以this区分
    2.在类的非静态成员函数中返回对象本身，可使用return *this
*/

class Person{
public:
    Person(int age){
        //1.通过this解决同名问题，this指针指向被调用的成员函数所属的对象即p1
        this->age = age;
    }

    //返回本体时要用引用返回，如果不是引用而是Person（值的方式）就会创建一个新的对象（拷贝），该对象没有被接受px = p2.PersonAddAge(p1);才表示该对象被px接收
    //值传递的方式不会改变p2本身的值（），但第一次调用时this->age += p.age;会使p2加上p1一次，因为第一次调用的this指向的是p2，后面的调用this就指向被拷贝出来的p
    Person& PersonAddAge(Person &p){
        this->age += p.age;
        //this是指p2的指针，所有*this指向p2本体
        return *this;
    }
    int age;
};

void test1(){
    Person p1(18);
    cout << "p1 age:" << p1.age << endl;
}

void test2(){
    Person p1(10);
    Person p2(10);
    //2.返回对象本身return *this 实现链式编程思想
    p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
    cout << "p2 age: " << p2.age << endl;
}

int main(){
    test1();
    test2();
    //system("pause");
    return 0;
}