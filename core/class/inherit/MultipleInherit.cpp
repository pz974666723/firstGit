#include<iostream>
#include<string>
using namespace std;
//两父类成员同名
class Base1{
public:
    Base1(){
        m_a = 100;
        m_s = 1;
    }
    int m_a;
    int m_s;
};

class Base2{
public:
    Base2(){
        m_b = 100;
        m_s = 2;
    }
    int m_b;
    int m_s;
};

class Son:public Base1, public Base2{
public:
    Son(){
        m_c = 10;
        m_d = 20;
    }
    int m_c, m_d;
};

void test1(){
    Son s;
    cout << "size of son = " << sizeof(s) << endl;
    //通过作用域解决
    cout << "base1 m_s = " << s.Base1::m_s << endl;
    cout << "base2 m_s = " << s.Base2::m_s << endl;
}

int main(){
    test1();
    //system("pause");
    return 0;
}