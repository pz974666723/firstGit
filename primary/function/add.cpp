#include<iostream>
using namespace std;
/*
返回值类型 函数名 (参数列表){
    函数体语句
    return表达式
}
*/
//加法函数
//num1,num2为形参
int add(int num1, int num2){
    int sum = num1 + num2;
    return sum;
}
int main(){
    int a = 10;
    int b = 10;
    //a,b为实参
    cout << add(a, b) << endl;
    //system("pause");
    return 0;
}