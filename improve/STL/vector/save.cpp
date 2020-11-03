/*
at(int idx); //返回索引idx所指的数据
operator[]; //返回索引idx所指的数据
front(); //返回容器中第一个数据元素
back(); //返回容器中最后一个数据元素
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

void test1(){
    vector<int> v1;
    for(int i=0; i<10; i++){
        v1.push_back(i);
    }
    //利用[]访问数组中元素
    for(int i=0; i<v1.size(); i++){
        cout << v1[i] << " ";
    }
    cout << endl;
    //利用at访问元素
    for(int i=0; i<v1.size(); i++){
        cout << v1.at(i) << " ";
    }
    cout << endl;
    //返回容器中第一个数据元素
    cout << "1st :" << v1.front() << endl;
    //返回容器中最后一个数据元素
    cout << "last :" << v1.back() << endl;
}

int main(){
    test1();
    //system("pause");
    return 0;
}