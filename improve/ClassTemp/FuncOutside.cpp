#include<iostream>
#include<string>
using namespace std;

//类模板成员函数
template<class T1, class T2>
class Person{
public:
    Person (T1 name, T2 age);
    void showPerson();
    T1 m_name;
    T2 m_age;
};
//构造函数的类外实现
template<class T1, class T2>
Person<T1, T2>::Person (T1 name, T2 age){
    m_age = age;
    m_name = name;
}
//普通成员函数类外实现
template<class T1, class T2>
void Person<T1, T2>::showPerson(){
    cout << "name: " << m_name;
    cout << "  age: " << m_age << endl;
}

void test1(){
    Person<string, int> p("pz", 22);
    p.showPerson();
}

int main(){
    test1();
    //system("pause");
    return 0;
}