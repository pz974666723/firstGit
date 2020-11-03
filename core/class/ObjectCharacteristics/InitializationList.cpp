#include<iostream>
#include<string>
using namespace std;
/*
用途：给类中的属性初始化
语法：构造函数()： 属性1（值1），属性2（值2）...{}
*/

class Person{
public:
    //传统初始化
    // Person(int a, int b, int c){
    //     m_a = a;
    //     m_b = b;
    //     m_c = c;
    //     cout << "PersonGZ(yes) is using" << endl;
    // }

    //初始化列表初始化
    Person(int a, int b, int c) :m_a(a),m_b(b),m_c(c){

    }
    int m_a;
    int m_b;
    int m_c;

    //析构函数进行清理
    ~Person(){
        cout << "PersonXG is using" << endl;
    }
};

void test1(){
    //Person p(1, 2, 3);
    Person p(30,20,10);
    cout << p.m_a << p.m_b << p.m_c << endl;
}

int main(){
    test1();
    return 0;
}