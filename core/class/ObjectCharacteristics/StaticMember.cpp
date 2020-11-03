#include<iostream>
#include<string>
using namespace std;
/*
静态成员函数：
    1.所有对象共享同一个函数,因此通过类名就能访问
    2.静态成员函数只能访问静态成员变量
*/

class Person{
public:
    //静态成员函数
    static void func(){
        m_a = 100;//静态成员函数可以访问静态成员变量，该数据共享
        //m_b = 200;//不可访问非静态,m_b不知道是哪个对象的属性，
        cout << "static void func is using " << endl;
    }

    //静态成员变量,类内声明
    static int m_a;
    int m_b;

    //静态成员函数有访问权限
private:
    static void func2(){
        cout << "static2 void func is using " << endl;
    }
};

//类外初始化
int Person::m_a = 0;

void test1(){
    //1.通过对象访问
    Person p;
    p.func();
    //p.func2();//私有作用域无法访问

    //2.通过类名访问
    Person::func();
}

int main(){
    test1();
    //system("pause");
    return 0;
}