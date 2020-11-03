#include<iostream>
#include<string>
using namespace std;
//1.普通类中的成员函数一开始就可以创建
//2.类模板中的成员函数在调用时才创建

class Person1{
public:
    void showPerson1(){
        cout << "show person1" << endl;
    }
};

class Person2{
public:
    void showPerson2(){
        cout << "show person2" << endl;
    }
};

template<class T>
class myClass{
public:
    T obj;
    //类模板中的成员函数 一开始不创建 调用时才创建
    void func1(){
        obj.showPerson1();
    }
    void func2(){
        obj.showPerson2();
    }
    
};

void test1(){
    myClass<Person1> m1;
    m1.func1();
    //m1.func2();//调用时才报错
}

int main(){
    test1();
    //system("pause");
    return 0;
}