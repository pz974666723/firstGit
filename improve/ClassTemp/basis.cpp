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

void test1(){
    Person<string, int> p1("pz", 21), p2("pz", 21);
    p1.showPerson();
    p2.showPerson();
}

int main(){
    test1();
    //system("pause");
    return 0;
}