#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    Person(string name, int age){
        m_name = name;
        m_age = age;
    }
    //重载 ==
    bool operator==(Person &p){
        if (this->m_name == p.m_name && this->m_age == p.m_age){
            return true;
        }
        else
            return false;
    }

    //重载 !=
    //this->可以不需要
    bool operator!=(Person &p){
        if (m_name != p.m_name || m_age != p.m_age){
            return true;
        }
        else
            return false;
    }

    string m_name;
    int m_age;
};

void test1(){
    Person p1("abc", 18);
    Person p2("abc", 18);

    if (p1 == p2){
        cout << "equal" << endl;
    }
    else 
        cout << "not equal" << endl;

    if (p1 != p2){
        cout << " not equal" << endl;
    }
    else 
        cout << " equal" << endl;
}

int main(){
    test1();
    //system("pause");
    return 0;
}