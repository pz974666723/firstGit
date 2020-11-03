#include<iostream>
#include<string>
using namespace std;

//全局函数 打印信息

template<class T1, class T2>
class Person;
//全局函数 类外实现
template<class T1, class T2>
void showPerson2(Person<T1, T2> p){
    cout << "(out)name: " << p.m_name;
    cout << "  (out)age: " << p.m_age << endl; 
}

template<class T1, class T2>
class Person{
    //全局函数 类内实现
    friend void showPerson(Person<T1, T2> p){
        cout << "name: " << p.m_name;
        cout << "  age: " << p.m_age << endl; 
    }
    //全局函数 类内声明
    //加上空模板参数列表
    friend void showPerson2<>(Person<T1, T2> p);
public:
    Person (T1 name, T2 age){
        m_name = name;
        m_age = age;
    }
private:
    T1 m_name;
    T2 m_age;
};

void test1(){
    Person<string, int> p("pz", 22);
    showPerson(p);
    showPerson2(p);
}

int main(){
    test1();
    //system("pause");
    return 0;
}