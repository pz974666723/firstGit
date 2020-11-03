#include<iostream>
#include<string>
using namespace std;
/*
与普通函数的区别： 
    1.普通函数调用时可以发生自动类型转换（隐式类型转换）
    2.函数模板调用时，如果利用自动类型推导，不会发生隐式类型转换
    3.如果利用显示指定类型的方式，可以发生隐式类型转换
*/

//普通函数
int myAdd01(int a, int b){
    return a+b;
}

//函数模板
template<class T>
T myAdd02(T a, T b){
    return a+b;
}

void test1(){
    int a = 10;
    int b = 20;
    char c = 'c';
    //myAdd01(a, c)时发生了隐式类型转换，将c从char变为int
    cout << myAdd01(a, c) << endl;
    //cout << myAdd02(a, c) << endl;//自动类型推导无法隐式类型转换
    cout << myAdd02<int>(a, c) << endl;//显示指定类型可以发生隐式类型转换
}

int main(){
    test1();
    //system("pause");
    return 0;
}