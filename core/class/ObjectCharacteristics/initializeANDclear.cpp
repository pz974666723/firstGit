#include<iostream>
#include<string>
using namespace std;
//初始化和清理

class Person{
public:
//构造函数初始化
    Person(){
        cout << "PersonGZ is using" << endl;
    }
//析构函数进行清理
    ~Person(){
        cout << "PersonXG is using" << endl;
    }
};

//测试
void test1(){
    Person p;//栈上数据，test1 执行完后， 释放对象（释放对象前，自动调用析构函数）
}

int main(){
    //test1();
    Person p;
    system("pause");//pause后，main还没执行完毕，析构函数还未执行，按任意键后才执行
    return 0;
}