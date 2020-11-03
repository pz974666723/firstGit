#include<iostream>
using namespace std;
//引用做返回值

//1.不要返回局部变量的引用
//int&表示返回值为 引用
int& test01(){
    int a = 10;//局部变量在栈区，正常情况下在该函数结束时，该变量释放
    return a;
}

//2.函数的调用可以作为左值
int& test02(){
    static int a = 10;//静态变量，全局区，程序结束后释放
    return a;
}

int main(){
    //int &ref = test01();
    //cout << "ref = " << ref << endl;//编译器保留
    //cout << "ref = " << ref << endl;//错误,a的内存已释放

    int &ref2 = test02();
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    test02() = 1000;//作为左值即在赋值的左边，ref2相当于a（静态变量，在全局区）的别名
    cout << "ref2 = " << ref2 << endl;
    cout << "ref2 = " << ref2 << endl;

    //system("pause");
    return 0;
}