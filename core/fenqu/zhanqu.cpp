#include<iostream>
using namespace std;
//注意事项：不要返回局部变量的地址

//int* 表示返回类型为地址
int* func(){
    int a = 10;//局部变量，存放在栈区，其数据在该函数执行完后自动释放
    return &a;
}

int main(){
    int *p = func();
    cout << *p << endl;//第一次可打印正确的值是因为编译器做了保留
    cout << *p << endl;//返回乱码
    //system("pause");
    return 0;
}