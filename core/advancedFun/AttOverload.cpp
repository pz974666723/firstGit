#include<iostream>
using namespace std;
//引用作为重载条件
//函数重载碰到函数默认参数

void func(int &a){
    cout << "func is using" << endl;
}

void func(const int &a){
    cout << "func(const) is using" << endl;
}

void func2(int a){//若函数为func，int a和上面的int &a的参数都是int不满足重载条件
    cout << "func2(int a) is using" << endl;
}

void func2(int a, int b = 10){
    cout << "func2(int a, int b) is using" << endl;
}

int main(){
    int a = 10, b = 20;
    func(a);
    func(10);
    func2(0, 0);//函数重载碰到默认参数，会出现二义性，尽量避免func2(a)会报错
    //system("pause");
    return 0;
}