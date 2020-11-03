#include<iostream>
using namespace std;
/*
引用：给变量取别名
语法：数据类型 &别名 = 原名
两个变量访问的地址是一样的
*/
int main(){
    int a = 10;
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    b = 20;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //system("pause");
    return 0;
}