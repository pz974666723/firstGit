#include<iostream>
#include<string>
using namespace std;

//纯虚函数和抽象类
// 抽象类特点：
//1.无法实例化对象
//2.子类必须重写抽象类的纯虚函数，否则无法实例化对象
class Base{
public:
    //只要有一个纯虚函数，他就是抽象类
    virtual void func() = 0;
};

class Son: public Base{
public:
    void func(){
        cout << "func using" << endl;
    }
};

void test1(){
    //Base b;
    //new Base;
    Son s;//子类必须重写抽象类的纯虚函数，否则无法实例化对象
    Base *base = &s;
    base->func();
}

int main(){
    test1();
    //system("pause");
    return 0;
}