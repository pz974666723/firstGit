#include<iostream>
#include<string>
using namespace std;
/*
class A{}
class B{A a;}
B类中有A对象作为成员，A为对象成员
A类构造函数先构造,B类析构函数先释放
析构顺序与构造相反
*/

class Phone{
public:
    Phone(string Pname){
        m_Pname = Pname;
        cout << "using Phone" << endl;
    }
    ~Phone(){
        cout << "Phone losing" << endl;
    }
    string m_Pname;
};

class Person{
public:
    //Phone m_phone = Pname;(隐式转换法)
    Person(string name, string Pname):m_name(name),m_phone(Pname){
        cout << "using Person" << endl;
    }
    ~Person(){
        cout << "Person losing" << endl;
    }
    string m_name;
    Phone m_phone;
};

void test1(){
    Person p("paul", "iphoneX");
    cout << p.m_name << "using" << p.m_phone.m_Pname << endl;
}

int main(){
    test1();
    //system("pause");
    return 0;
}