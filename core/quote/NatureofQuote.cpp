#include<iostream>
using namespace std;
//引用的本质在c++中是一个指针常量

//自动转换为int* const ref2 = &a;
void func(int& ref2){
    ref2 = 100;//自动转换成 *ref2 = 100
}

int main(){
    int a = 10;

    int &ref = a;
    //内部自动转换为 int* const ref = &a; 指针常量指针不可改，所以引用也别不可改
    ref = 20;
    //内部发现ref是引用，自动转换成 *ref = 20;

    cout << "a = " << a << endl;
    cout << "ref = " << ref << endl;

    func(a);
    cout << "a = " << a << endl;

    //system("pause");
    return 0;
}