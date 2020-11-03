#include<iostream>
using namespace std;

/*
整型
int: 4 范围(-2^15 ~ 2^15-1)
short: 2 范围(-2^31 ~ 2^31-1)
long: win 4 , [linux 4(32bit), 8(64bit)] 范围(-2^31 ~ 2^31-1)
long long: 8 范围(-2^63 ~ 2^63-1)

sizeof关键字(统计内存所占空间)
sizeof(数据类型/变量名)

实型（浮点型）
float: 4   7位有效数字
double: 8   15~16位有效数字
科学计数法

字符型
char ch = 'a';
*/
int main()
{
    short num1 = 10;
    cout << "short = " << sizeof(num1) << endl;
    cout << "short = " << sizeof(short) << endl;

    float f1 = 3.1415926f;
    float f2 = 3e-2;
    double d1 = 3.1415926;
    cout << "f1 = " << f1 << endl;
    cout << "d1 = " << d1 << endl;
    cout << "f2 = " << f2 << endl;

    char ch = 'a';
    cout << ch << endl;
    cout << "字符大小" <<  sizeof(ch) << endl;
    cout << (int)ch << endl;

    system("pause");

    return 0;
}