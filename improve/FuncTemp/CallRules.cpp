#include<iostream>
#include<string>
using namespace std;
/*
调用规则：
    1.如果函数模板和普通函数都可以实现，优先调用普通函数
    2.可以通过空模板参数列表来强制调用函数模板
    3.函数模板也可以发生重载
    4.如果函数模板可以产生更好的匹配,优先调用函数模板
*/

void myPrint(int a, int b){
    cout << "func" << endl;
}
template<class T>
void myPrint(T a, T b){
    cout << "temp func" << endl;
}
template<class T>
void myPrint(T a, T b, T c){
    cout << "temp func reload" << endl;
}

void test1(){
    int a = 10, b = 20, c = 30;
    //1
    myPrint(a,b);

    //2 <>为空模板参数列表
    myPrint<>(a,b);

    //3
    myPrint(a,b,c);

    //4 更好的匹配：不发生隐式类型转换
    char c1 = 'a';
    char c2 = 'b';
    myPrint(c1,c2);
}

int main(){
    test1();
    //system("pause");
    return 0;
}