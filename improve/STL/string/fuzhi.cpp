/*
1.string& operator=(const char* s); //char*类型字符串 赋值给当前的字符串
2.string& operator=(const string &s); //把字符串s赋给当前的字符串
3.string& operator=(char c); //字符赋值给当前的字符串
4.string& assign(const char *s); //把字符串s赋给当前的字符串
5.string& assign(const char *s, int n); //把字符串s的前n个字符赋给当前的字符串
6.string& assign(const string &s); //把字符串s赋给当前字符串
7.string& assign(int n, char c); //用n个字符c赋给当前字符串
*/
#include<iostream>
#include<string>
using namespace std;

//string赋值操作

void test1(){
    // = 赋值
    string s1;//1.
    s1 = "hello ";
    cout << "s1 : " << s1 << endl;
    string s2;//2.
    s2 = s1;
    cout << "s2 : " << s2 << endl;
    string s3;//3.
    s3 = 'a';
    cout << "s3 : " << s3 << endl;

    //assign赋值
    string s4, s5, s6, s7;
    s4.assign("hello world");//4.
    cout << "s4 : " << s4 << endl;
    s5.assign("hello world", 5);//5.
    cout << "s5 : " << s5 << endl;
    s6.assign(s5);//6.
    cout << "s6 : " << s6 << endl;
    s7.assign(5, 'a');//7.
    cout << "s7 : " << s7 << endl;

}

int main(){
    test1();
    //system("pause");
    return 0;
}