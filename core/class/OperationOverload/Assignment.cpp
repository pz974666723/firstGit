#include<iostream>
#include<string>
using namespace std;
/*
c++编译器至少给一个类添加4个函数
1.默认构造函数
2.默认析构函数
3.默认拷贝构造函数，对属性值进行拷贝
4.赋值运算符 operator= ,对属性进行拷贝
*/

class Person{
public:
    Person(int age){
        m_age = new int(age);
    }
    ~Person(){
        if (m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
    }
//重载运算符，使其具有深拷贝的功能
    Person& operator=(Person &p){
        //编译器中：
        //m_age = p.m_age;
        //应该先判断释放有属性再堆区，先释放干净，再深拷贝
        if (m_age != NULL){
            delete m_age;
            m_age = NULL;
        }
        m_age = new int(*p.m_age);
        return *this;
    }

    int *m_age;
};

void test1(){
    Person p1(18);
    Person p2(20);
    Person p3(30);
    p3 = p2 = p1;

    cout << "p1 age = " << *p1.m_age << endl;
    cout << "p2 age = " << *p2.m_age << endl;
    cout << "p3 age = " << *p3.m_age << endl;
}

int main(){
    test1();
    
    return 0;
}