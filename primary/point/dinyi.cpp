#include<iostream>
using namespace std;
/*
通过指针来保存地址
*/

int main(){
    int a = 10;
    //定义指针： 数据类型 * 指针变量名
    /*
    int *p;
    p = &a;
    */
    int *p = &a;
    cout << "address of a = " << &a << endl;
    cout << "p = " << p << endl;

    //使用指针,解引用：在指针前加*号
    cout << "*p = " << *p << endl;
    *p = 1000;
    cout << "*p = " << *p << endl;
    cout << "a = " << a << endl;

    //64bit占8byte  32bit占4byte
    //地址 *p 中储存的式地址
    cout << "sizeof (int *) = " << sizeof(int *) << endl;
    cout << "sizeof (double *) = " << sizeof(double *) << endl;
    //system("pause");
    return 0;
}