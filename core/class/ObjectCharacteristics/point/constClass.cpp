#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    Person(){

    }
    void showPerson() const//成员函数后加const，修饰的是this指针
    {
        //m_a = 100;//相当于this->m_a = 100;
        //this指针的本质是 指针常量 Person *const this;
        //加了const后就变成 const Person *const this; 
        m_b = 100;//加上mutable后在常函数中可以修改 
    }
    void func(){

    }
    int m_a;
    mutable int m_b;
};

void test2(){
    const Person p;
    //p.m_a = 100;//不可修改
    p.m_b = 100;

    //常对象只能调用常函数
    p.showPerson();
    //p.func();//不能调用普通成员函数，因为普通成员函数可对m_a操作
}

int main(){
    test2();
    system("pause");
    return 0;
}