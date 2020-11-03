#include<iostream>
using namespace std;
//形参列车中可以有占位参数用来占位，调用时必须填补该位置
//语法：返回值类型 函数名（数据类型）{}


//占位参数可以有默认参数
int func(int a, int ){
    return a;
}

int func2(int a, int =11){
    return a;
}

int main(){
    //传进去的第二个数11目前无法用到
    func(10, 11);
    func2(10 );
    //system("pause");
    return 0;
}