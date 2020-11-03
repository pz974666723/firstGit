#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    Person(string name, int age){
        this->m_name = name;
        m_age = age;
    }
    string m_name;
    int m_age;
};

//对比两个数是否相等
template<class T>
bool myCompare(T &a, T&b){
    if (a==b) return true;
    else return false;
}
//解决方法二：利用具体化Person的版本实现代码，具体化优先调用
template<>bool myCompare(Person &a, Person &b)
{
    if(a.m_age == b.m_age && a.m_name == b.m_name) return true;
    else return false;
}

void test1(){
    int a = 10, b = 20;
    bool ret1 = myCompare(a, b);
    cout << ret1 << endl;
    Person p1("pz", 21), p2("pz", 21);
    //解决方法一：运算符重载（太麻烦）
    bool ret2 = myCompare(p1, p2);
    cout << ret2 << endl;
}

int main(){
    test1();
    //system("pause");
    return 0;
}