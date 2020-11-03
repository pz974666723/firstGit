#include<iostream>
using namespace std;
/*
返回值类型 函数名 (参数列表){
    函数体语句
    return表达式
}
*/
//形参的改变不会影响实参
void swap(int num1, int num2){
    cout << "before:" << endl;
    cout << "num1 = " << num1 << " ";
    cout << "num2 = " << num2 << endl;
    int temp;
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "after:" << endl;
    cout << "num1 = " << num1 << " ";
    cout << "num2 = " << num2 << endl;
    //return;返回值为void时，可以不用return
}
int main(){
    int a = 11;
    int b = 22;
    swap(a, b);
    cout << "a = " << a << " ";
    cout << "b = " << b << endl;
    //system("pause");
    return 0;
}