#include<iostream>
#include<string>
using namespace std;
//重载后使用方式非常像函数的调用，因此称为仿函数，STL中常用
//仿函数无固定写法，非常灵活

//函数调用运算符重载
//打印输出类
class MyPrint{
public:
    //重载函数调用运算符
    void operator()(string test){
        cout << test << endl;
    }
};

void  myPrint02(string test){
    cout << test << endl;
}
void test1(){
    MyPrint myPrint;
    myPrint("hhhh");//仿函数 使用起来非常像函数myPrint为对象名
    myPrint02("hhhh");//真实函数myPrint02为函数名
}
//仿函数使用灵活
//加法类
class MyAdd{
public:
    int operator()(int n1, int n2){
        return n1 + n2; 
    }
};

void test2(){
    MyAdd myAdd;
    cout << myAdd(1, 2) << endl;
    //匿名函数对象  匿名对象仅调用一次，在该行执行完 后释放MyAdd()
    cout << MyAdd()(1, 200) << endl;
}
int main(){
    test1();
    test2();
    //system("pause");
    return 0;
}