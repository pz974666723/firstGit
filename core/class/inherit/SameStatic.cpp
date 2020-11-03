#include<iostream>
#include<string>
using namespace std;
//同名静态成员
class Base{
public:
    static void func(){
        cout << "base func" << endl;
    }
    static int m_a;
};
int Base::m_a = 100;

class Son :public Base{
public:
    //子类和父类中含有相同的函数名称m_a
    static void func(){
        cout << "son func" << endl;
    }
    //子类和父类中含有相同的静态成员属性名称m_a
    static int m_a;
};
int Son::m_a = 200;

void test1(){
    Son s;
    //1.通过对象访问
    cout << "son m_a = " << s.m_a << endl;
    cout << "base m_a = " << s.Base::m_a << endl;
    //2.通过类名访问
    cout << "son m_a = " << Son::m_a << endl;
    cout << "base m_a = " << Son::Base::m_a << endl;
}

void test2(){
    //1.通过对象访问
    Son s;
    s.func();
    s.Base::func();
    //2.通过类名访问
    Son::func();
    Son::Base::func();
}

int main(){
    test1();
    test2();
    //system("pause");
    return 0;
}