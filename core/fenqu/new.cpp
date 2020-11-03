#include<iostream>
using namespace std;
/*
利用new操作符在堆区开辟数据，可利用delete操作符释放
*/
int* func(){
    //在堆区创建整型数据
    //new 返回的是该数据类型的指针
    int *p = new int(10);
    return p;
}

void test01(){
    int *p = func();
    cout << *p << endl;
    cout << *p << endl;
    cout << *p << endl;
    delete p;
    //cout << *p << endl;//内存已被释放
}

void test02(){
    //在堆区创建10个元素int数组
    int *arr = new int[10]; //中括号中的10表示数组有10个元素，和上文中小括号中的10（表示该元素的值为10）不同
    for (int i = 0; i < 10; i++){
        arr[i] = i + 100;
    }
    for (int i = 0; i < 10; i++){
        cout << arr[i] << endl;
    }
    //释放数组时要加中括号
    delete[] arr;
}

int main(){
    //new的基本语法
    test01();
    test02();
    //system("pause");
    return 0;
}