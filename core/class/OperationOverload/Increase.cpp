#include<iostream>
#include<string>
using namespace std;
//int a = 10; 前置递增 ++a 先让变量递增运算 再输出运算
//cout << ++a; //11
//cout << a; //11

//int b =10; 前置递增 b++ 先输出运算 再让变量递增运算
//cout << b++; //10
//cout << b; //11

class MyInteger{
    friend ostream &operator<<(ostream &cout, MyInteger myint);

public:
    MyInteger(){
        //初始化
        m_num = 0;
    }
//重载 ++
    //前置++ 先运算，再返回
    //返回引用是为了一直对一个对象递增
    MyInteger& operator++(){
        m_num++;
        //this指向自身
        return *this;
    }

    //后置++
    //括号中的int代表占位参数，用于区分前置和后置（重载）
    //后置递增是返回值，因为return 的 temp是一个局部对象，当前函数执行完后释放
    MyInteger operator++(int){
        //先记录当时结果
        MyInteger temp = *this;
        m_num++;
        return temp;
    }

private:
    int m_num;
};

//重载<<使MyInteger可被输出
ostream& operator<<(ostream &cout, MyInteger myint){
    cout << myint.m_num;
    
    return cout;
}

void test1(){
    MyInteger myint;
    cout << ++(++myint) << endl;
}

void test2(){
    MyInteger myint;
    //(myint++)++无法实现
    cout << myint++ << endl;
    cout << myint << endl;
}

int main(){
    test1();
    test2();
    //system("pause");
    return 0;
}