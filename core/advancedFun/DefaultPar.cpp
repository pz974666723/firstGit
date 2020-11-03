#include<iostream>
using namespace std;
//函数列表中形参可以有默认值
//语法：返回值类型 函数名 （参数 = 默认值）{}

int func(int a,int b = 20,int c = 30){
    return a + b + c;
}
/*注意事项
1.如果某个位置有默认参数，从这个位置往后都必须有默认参数
2.如果函数声明有了默认参数，函数的实现就不能有默认参数
int fun2(int a, int b = 10);
//上面的fun2声明有了默认参数，下面fun2实现就不能有
//声明和实现只能有一个里面有默认参数
int fun2(int a, int b = 10){
    return a+b;
}
*/
int main(){
    cout << func(10, 30) << endl;

    //system("pause");
    return 0;
}