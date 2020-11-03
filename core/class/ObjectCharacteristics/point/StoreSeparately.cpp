#include<iostream>
#include<string>
using namespace std;
//成员变量和成员函数分开储存
//只有非静态成员变量才属于类的对象上

class Person{
public:
    int m_a;//非静态成员变量 所占内存：4
    static int m_b;//静态成员变量 不在类对象上
    void func() {}//非静态成员函数 不在类对象上
    static void func2() {}//静态成员函数 不在类对象上
};
int Person::m_b = 0;

void test1(){
    Person p;
    
    //空对象占用内存空间为：1 -> 4(有了非静态成员变量后)
    //因为编译器会给每个空对象一个字节空间，为了区分空对象占的内存空间
    //即每个空对象也应该有一个独一无二的内存地址
    cout << "size of p = " << sizeof(p) << endl;
}

void test2(){

}

int main(){
    test1();
    test2();
    //system("pause");
    return 0;
}