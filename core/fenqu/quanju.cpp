#include<iostream>
using namespace std;
//全局变量
int g_a = 10;
int g_b = 10;
//1.const修饰全局
const int c_g_a = 10;
const int c_g_b = 10;
int main(){

    //普通局部变量
    int a = 10;
    int b = 10;  
    
    //静态变量
    static int s_a = 10;
    static int s_b = 10;

    //常量
    //"hello"字符串常量
    //const修饰的变量1.   2.  
    
    //2.const修饰局部变量（不在全局区）
    const int l_g_a = 10;
    const int l_g_b = 10;


    cout << "addressA = " << &a << endl;
    cout << "addressB = " << &b << endl;
    cout << "addressGA = " << &g_a << endl;
    cout << "addressGB = " << &g_b << endl; 
    cout << "addressSA = " << &s_a << endl;
    cout << "addressSB = " << &s_b << endl;
    cout << "zifuchuan = " << &"hello" << endl;
    cout << "addressCGA = " << &c_g_a << endl;
    cout << "addressCGB = " << &c_g_b << endl;
    cout << "addressLGA = " << &l_g_a << endl;
    cout << "addressLGB = " << &l_g_b << endl;
    // char x = 'a';
    // cout << (long long)(&x);
    //system("pause");
    return 0;
}