#include<iostream>
#include<string>
using namespace std;
/*
1.自动类型推导，必须推导出一致的数据类型T,才可以使用
2.模板必须要确定出T的数据类型，才可以使用
*/
template<class T>//一般函数模板用typename,类模板用class 其实两者效果一样 都可用class
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

void test1(){
    int a = 10, b = 20;
    char c = 'c';
    mySwap(a, b);
    //mySwap(a, c);//错误 编译器推出不一样数据类型的T
    cout << "a = " << a << "; b = " << b <<endl;
}

template<class T>
void func(){
    cout << "func" << endl;
}
void test2(){
    func<int>();//模板必须确定T的数据类型，如果无法推导，必须通过显示指定类型解决这一问题
}

int main(){
    test1();
    test2();
    //system("pause");
    return 0;
}