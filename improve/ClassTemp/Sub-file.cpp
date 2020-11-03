#include<iostream>
#include<string>
//1.直接包含源文件
//#include "Person.h"
using namespace std;
//2.将声明和实现写到同一个文件中，并更改后缀名为.hpp
#include "Person.hpp"

//类模板分文件编写问题以及解决方法
// template<class T1, class T2>
// class Person{
// public:
//     Person (T1 name, T2 age);
//     void showPerson();
//     T1 m_name;
//     T2 m_age;
// };
// template<class T1, class T2>
// Person<T1, T2>::Person (T1 name, T2 age){
//     m_age = age;
//     m_name = name;
// }
// template<class T1, class T2>
// void Person<T1, T2>::showPerson(){
//     cout << "name: " << m_name;
//     cout << "  age: " << m_age << endl;
// }

void test1(){
    Person<string, int> p("pz", 22);
    p.showPerson();
}

int main(){
    test1();
    //system("pause");
    return 0;
}