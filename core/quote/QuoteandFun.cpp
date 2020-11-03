#include<iostream>
using namespace std;
//作用：函数传参时，可以利用引用技术使形参修饰实参
//优点：可以简化指针修改实参

//值传递
void swap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
}

//地址传递，可修饰实参
void swap02(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}

//引用传递，可修饰实参，相当于在swap03中给main中的a取别名，别名也为a
void swap03(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}
int main(){
    int a = 10;
    int b = 20;
    swap01(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a = 10;
    b = 20;
    swap02(&a, &b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    a = 10;
    b = 20;
    swap03(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //system("pause");
    return 0;
}