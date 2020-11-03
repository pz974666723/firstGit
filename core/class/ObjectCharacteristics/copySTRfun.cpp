#include<iostream>
#include<string>
using namespace std;
/*
拷贝构造函数调用时的三种情况：
1.使用一个已创建完毕的对象初始化一个新对象test1
2.值传递的方式给函数参数传值test2
3.以值方式返回局部对象test3
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


void test1(){
    Person p1(20);
    Person p2(p1);
    cout << "p2 age = " << p2.m_age << endl;
}

void doWork(Person p){

}
void test2(){
    Person p;//默认调用
    doWork(p);//拷贝调用
}

Person doWork2(){
    Person p1;
    cout << &p1 << endl;
    return p1;//拷贝调用
}
void test3(){
    Person p;
    p = doWork2();
    cout << &p << endl;
}

int main(){
    //test1();
    //test2();
    test3();
    //system("pause");
    return 0;
}