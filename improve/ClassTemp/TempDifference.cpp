#include<iostream>
#include<string>
using namespace std;

template<class NameType, class AgeType>
class Person{
public:
    Person(NameType name, AgeType age){
        this->m_name = name;
        m_age = age;
    }
    void showPerson(){
        cout << "name: " << m_name;
        cout << "  age: " << m_age << endl;
    }
    NameType m_name;
    AgeType m_age;
};

template<class NameType = string, class AgeType = int>
class Person2{
public:
    Person2(NameType name, AgeType age){
        this->m_name = name;
        m_age = age;
    }
    void showPerson(){
        cout << "name: " << m_name;
        cout << "  age: " << m_age << endl;
    }
    NameType m_name;
    AgeType m_age;
};

void test1(){
    //Person p("pz", 22);//无法自动类型推导
    Person<string, int> p("pz", 22);
    p.showPerson();
    //模板参数列表中可以有默认参数 见Person2
    Person2<> p2("pz", 22);
    p2.showPerson();
}

int main(){
    test1();
    //system("pause");
    return 0;
}