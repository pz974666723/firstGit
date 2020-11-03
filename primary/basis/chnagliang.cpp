#include<iostream>
using namespace std;
//  #define 常量名 常量值
//  const 数据类型 常量名 = 常量值
#define Day 7

int main()
{
    cout << "一周共" << Day << "天" << endl;

    const int Month = 12;
    cout << "一年有" << Month << "月" << endl;

    system("pause");

    return 0;
}