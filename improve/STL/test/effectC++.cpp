#include<iostream>
#include<string>
#include<vector>
using namespace std;

class temp{
public:
    temp(string &n):name(n){}
    string &name;
};

void test1(){
    string newD("aaa");
    string oldD("bbb");
    temp a(newD);
    temp b(oldD);
    a.name = b.name;
    cout << a.name;
}

void test2(){
    int a = 1, b = 6;
    cout << ((b - a) >> 1);
}

void test3(){
    int a = INT32_MAX, b = 953271190;
    cout << a % 1000000007 << endl;
    cout << b % 1000000007 << endl;
}

int main(){
    test3();
    return 0;
}

