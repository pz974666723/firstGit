#include<iostream>
using namespace std;
/*
作用：函数名可以相同，提高复用性
满足条件：
    1.同一个作用域 main函数中，或都在全局作用域....
    2.函数名相同
    3.函数参数类型不同 或者 个数不同 或者 顺序不同

注意：函数返回值不可以作为函数重载条件
*/

void func(){
    cout << "func is using" << endl;
}

void func(int a){
    cout << "func(int a) is using" << endl;
}

void func(double a){
    cout << "func(double a) is using" << endl;
}

void func(int a, double b){
    cout << "func(int a, double b) is using" << endl;
}

void func(double a, int b){
    cout << "func(double a, int b) is using" << endl;
}

int main(){
    func();
    func(10);
    func(3.14);
    func(10, 3.14);
    func(3.14, 10);

    //system("pause");
    return 0;
}