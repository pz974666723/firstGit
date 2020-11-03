#include<iostream>
using namespace std;

int* func(){
    //利用new关键字，可将数据开辟到堆区
    new int(10);//会返回一个地址
    cout << new int(10) << endl;
    //指针 本质是局部变量，在栈区，指针报错的数据是放在堆区
    int *p = new int(10);
    return p;
}

int main(){
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;//两次打印并无影响
    //system("pause");
    return 0;
}