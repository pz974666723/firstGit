#include<iostream>
using namespace std;
/*
可以多次声明，但只能定义一次
函数在main函数之后需要声明
声明：
返回值类型 函数名 (参数列表)
*/
int max(int a, int b);

int main(){
    int a = 10;
    int b = 20;
    cout << max(a, b) << endl;
    //system("pause");
    return 0;
}

int max (int a, int b){
    return a > b ? a : b;
}