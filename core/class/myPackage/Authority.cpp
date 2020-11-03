#include<iostream>
#include<string>
using namespace std;
class Person{
public://公共权限  类内可以访问 类外可以访问
    string m_name;
protected://保护权限  类内可以访问 类外不可以访问（子类可访问父类的protected）
    string m_car;
private://私有权限  类内可以访问 类外不予可以访问（子类不可访问父类的private）
    int m_password;

public:
    void func(){
        m_name = "aA";
        m_car = "BMW";
        m_password = 123;
    }
};

int main(){
    Person p1;
    p1.m_name = 'B';
    //p1.m_car = "BENZ";
    //p1.m_password = 2313;
    //system("pause");
    return 0;
}