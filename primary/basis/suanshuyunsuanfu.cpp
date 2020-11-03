#include<iostream>
using namespace std;
/*
+ - * / 加减乘除
% 取余（取模）
++ 递增 --递减

*/
int main()
{

    int a1 = 10;
    int b1 = 3;

    cout << "zhengshu yunsuan" << endl;
    cout << a1 + b1 << endl;
    cout << a1 - b1 << endl;
    cout << a1 * b1 << endl;
    cout << a1 / b1 << endl;//整数相除，结果将小数部分去掉
    
    cout << "xiaoshu yunsuan" << endl;
    double d1 = 0.5;
    double d2 = 0.22;
    cout << d1 / d2 << endl;
    cout << a1 / d2 << endl;
    
    cout << "quyu" << endl;
    cout << a1 % b1 << endl;//取模运算必须有整数
    
    cout << "dizheng and dijian" << endl;
    int a = 10;
    int b = 10;
    int c = 10;
    int d = 10;
    int q, w, e, r;
    q = ++a*10;
    w = b++*10;
    e = --c*10;
    r = d--*10;
    //前置运算：先变量+1/-1 然后表达式运算
    //后置运算：先表达式运算 然后变量+1/-1
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;
    cout << "q = " << q << endl;
    cout << "w = " << w << endl;
    cout << "e = " << e << endl;
    cout << "r = " << r << endl;


    //system("pause");

    return 0;
}