#include<iostream>
#include<string>
using namespace std;

class Person{
    friend ostream &operator<<(ostream &out, Person &p);
public:
    Person(int a, int b){
        m_a = a;
        m_b = b;
    }
private:
    //成员函数重载
    //p << cout;
    //因此通常不用成员函数重载<<，因为无法实现cout在左侧
    // void operator<<(cout){

    // }
    int m_a;
    int m_b;
};

//只能通过全局函数重载
//cout全局只有一个，因此要传引用进来
//引用相当于取别名 因此取别名为out也没关系
ostream& operator<<(ostream &out, Person &p)
{ //operator<< (cout,p);简化 cout << p;
    out << "m_a = " << p.m_a << "  m_b = " << p.m_b;
    return out;
}

void test1(){
    Person p(10, 20);
    cout << p << endl;

}

int main(){
    test1();
    //system("pause");
    return 0;
}