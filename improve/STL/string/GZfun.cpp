/*
1.string(); //创建一个空的字符串 例如: string str;
2.string(const char* s); //使用字符串s初始化
3.string(const string& str); //使用一个string对象初始化另一个string对象
4.string(int n, char c); //使用n个字符c初始化
 */
#include<iostream>
#include<string>
using namespace std;

//string 的构造函数

void test1(){
    string s1;//1
    s1 = "hello word";
    cout << "s1 = " << s1 << endl;
    const char* str = "hello word";//在C语言中字符串常量的本质表示其实是一个地址
    cout << "str = " << str << endl;//传入地址后输出  用首地址就可以输出字符串
    cout << "str[0] = " << str[0] << endl;
    cout << "*str = " << *str << endl;
    cout << "&str = " << &str << endl;
    cout << "&str[0] = " << &str[0] << endl;//C语言中规定数组代表数组所在内存位置的首地址，也是 str[0]的地址，即str = &str[0];
    string s2(str);//2
    cout << "s2 = " << s2 << endl;
    string s3(s2);//3
    cout << "s3 = " << s3 << endl;
    string s4(10, 'a');//4
    cout << "s4 = " << s4 << endl;   
}

int main(){
    test1();
    //system("pause");
    return 0;
}