#include<iostream>
#include<string>
using namespace std;
//子类与父类同名
class Base{
public:
    Base(){
        m_a = 100;
    }
    void func(){
        cout << "base func" << endl;
    }
    int m_a;
};

class Son :public Base{
public:
    Son(){
        m_a = 200;
    }
    //子类和父类中含有相同的函数名称m_a
    void func(){
        cout << "son func" << endl;
    }
    //子类和父类中含有相同的成员属性名称m_a
    int m_a;
};

void test1(){
    Son s;
    //子类同名属性直接访问
    cout << "Son m_A = " << s.m_a << endl;
    //父类中访问（通过子类对象访问）需要加父类的作用域
    cout << "Father m_A = " << s.Base::m_a << endl;
}

void test2(){
    Son s;
    //子类同名函数直接访问
    s.func();
    //父类中访问（通过子类对象访问）需要加父类的作用域
    s.Base::func();
}

int main(){
    test1();
    test2();
    //system("pause");
    return 0;
}