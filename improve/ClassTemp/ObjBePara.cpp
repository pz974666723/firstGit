#include<iostream>
#include<string>
using namespace std;

//类模板对象做函数参数
/*
    1.指定传入的类型 --- 直接显示对象的数据类型
    2.参数模板化 --- 将对象中的参数变为模板进行传递
    3.整个类模板化 --- 将这个对象类型 模板化进行传递  
*/

template<class T1, class T2>
class Person{
public:
    Person(T1 name, T2 age){
        this->m_name = name;
        m_age = age;
    }
    void showPerson(){
        cout << "name: " << m_name;
        cout << "  age: " << m_age << endl;
    }
    T1 m_name;
    T2 m_age;
};
//1.指定传入类型
void printPerson1(Person<string, int> &p){
    p.showPerson();
}
//2.参数模板化
template<class T1, class T2>
void printPerson2(Person<T1, T2> &p){
    p.showPerson();
    cout << "T1  type: " << typeid(T1).name() << endl;//查看模板中推出的类型
    cout << "T2  type: " << typeid(T2).name() << endl;
}
//3.整个类模板化
template<class T>
void printPerson3(T &p){
    p.showPerson();
    cout << "T  type: " << typeid(T).name() << endl;
}

//1
void test1(){
    Person<string, int>p("pz", 100);
    printPerson1(p);
}

//2
void test2(){
    Person<string, int>p("pz", 90);
    printPerson2(p);
}

//3
void test3(){
    Person<string, int>p("pz", 30);
    printPerson3(p);
}

int main(){
    test1();
    test2();
    test3();
    //system("pause");
    return 0;
}