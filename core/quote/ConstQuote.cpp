#include<iostream>
using namespace std;
//常量引用主要用来修饰形参，防止误操作
//在函数形参列表中，可以加const修饰形参，防止形参改变实参

void showvalue(const int &val){
    //val = 1000;//加入const变为只读，不可修改
    cout << "val = " << val << endl;
}
int main(){
    int a = 10;
    int &ref = a;//引用必须引一块合法的内存空间
    //加上const相当于
    // int temp = 10;
    // const int &ref = temp;

    const int &ref2 = 10;
    //ref2 = 20;//加入const变为只读，不可修改
    int b = 100;
    showvalue(b);
    cout << "b = " << b << endl;

    //system("pause");
    return 0;
}