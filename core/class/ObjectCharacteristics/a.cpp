#include<iostream>
#include<string>
using namespace std;
/*

*/

class Person{
public:
    //年龄属性
    int m_age;
    
    Person(){
        cout << "PersonGZ(no) is using" << endl;
    }
    
    Person(int age){
        m_age = age;
        cout << "PersonGZ(yes) is using" << endl;
    }
    
    Person(const Person &p){
        m_age = p.m_age;
        cout << "PersonGZ(copy) is using" << endl;
    }
    //析构函数进行清理
    ~Person(){
        cout << "PersonXG is using" << endl;
    }
};



int main(){
    
    return 0;
}