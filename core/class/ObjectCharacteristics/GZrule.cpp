#include<iostream>
#include<string>
using namespace std;
/*
写完一个类后c++编译器至少给一个类添加三个函数
1.默认构造函数
2.默认析构函数
3.默认拷贝构造函数，对属性进行拷贝赋值

调用规则：
    用户定义了有参构造函数，c++不提供默认构造函数，但会提供拷贝构造函数
    用户定义了拷贝构造函数，c++不提供其他构造函数
*/


class Person{
public:
    //年龄属性
    int m_age;
    
    // Person(){
    //     cout << "PersonGZ(no) is using" << endl;
    // }
    
    Person(int age){
        m_age = age;
        cout << "PersonGZ(yes) is using" << endl;
    }
    
    // Person(const Person &p){
    //     m_age = p.m_age;
    //     cout << "PersonGZ(copy) is using" << endl;
    // }
//析构函数进行清理
    ~Person(){
        cout << "PersonXG is using" << endl;
    }
};

// void test1(){
//     Person p;//默认
//     p.m_age = 18;

//     Person p2(p);//拷贝
//     cout << "p2 age:" << p2.m_age << endl;
// }//析构p 析构p2

void test2(){
    //Person p;//错误 没有默认构造
    Person p(28);
    Person p2(p);
    cout << "p2 age:" << p2.m_age << endl;
}

int main(){
    //test1();
    test2();
    //system("pause");
    return 0;
}