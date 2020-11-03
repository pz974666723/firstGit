#include<iostream>
using namespace std;
//引用必须初始化    int &b;该句未初始化，错误
//初始化后不可改变  int &b = a;后 不能int &b = c;

int main(){
    int a = 10;
    int c = 20;
    //int &b;该句未初始化，错误
    int &b = a;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;

    //int &b = a;后 不能int &b = c;
    b = c;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    //system("pause");
    return 0;
}