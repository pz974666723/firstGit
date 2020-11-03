#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    int m_a;
    int m_b;
    //通过成员函数重载+
    // Person operator+(Person &p){
    //     Person temp;
    //     temp.m_a = this->m_a + p.m_a;
    //     temp.m_b = this->m_b + p.m_b;
    //     return temp;
    // }
};

//通过全局函数重载+
Person operator+(Person &p1, Person &p2){
    Person temp;
    temp.m_a = p1.m_a + p2.m_a;
    temp.m_b = p1.m_b + p2.m_b;
    return temp;
}

//函数重载版本
Person operator+(Person &p1, int num){
    Person temp;
    temp.m_a = p1.m_a + num;
    temp.m_b = p1.m_b + num;
    return temp;
}

int main(){
    Person p1, p2;
    p1.m_a = 10;
    p2.m_a = 10;
    p1.m_b = 5;
    p2.m_b = 5;
    Person p3 = p1 + p2;
    Person p4 = p1 + 10;
    //成员函数重载本质：
    //Person p3 = p1.operator+(p2);
    //全局函数重载本质：
    //Person p3 = operator+(p1, p2);
    cout << p3.m_a << "   " << p3.m_b << endl;
    cout << p4.m_a << "   " << p4.m_b << endl;
    //system("pause");
    return 0;
}