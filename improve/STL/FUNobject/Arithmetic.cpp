#include<iostream>
#include<string>
#include<functional>
using namespace std;
//negate 一元
//plus 二元

void test1(){
    negate<int> n;
    cout << n(50) << endl;
    plus<int> p;//二元仿函数<>中只写一个类型（只允许同类型操作）
    cout << p(10, 20) << endl;

}

int main(){
    test1();
    //system("pause");
    return 0;
}