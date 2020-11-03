/*
push_back(ele); //尾部插入元素ele
pop_back(); //删除最后一个元素
insert(const_iterator pos, ele); //迭代器指向位置pos插入元素ele
insert(const_iterator pos, int count,ele);//迭代器指向位置pos插入count个元素ele
erase(const_iterator pos); //删除迭代器指向的元素
erase(const_iterator start, const_iterator end);//删除迭代器从start到end之间的元素
clear(); //删除容器中所有元素
*/

#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector的插入和删除

void printV(vector<int> &v){
    for (vector<int>::iterator it = v.begin(); it!=v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test1(){
    vector<int> v1;
    for (int i=10;i<60;i=i+10){
        v1.push_back(i);//尾插
    }
    printV(v1);

    v1.pop_back();//尾删
    printV(v1);

    v1.insert(v1.begin(), 100);//插入，第一个参数需要是迭代器
    printV(v1);

    v1.insert(v1.begin(), 2, 50);
    printV(v1);

    v1.erase(v1.begin());//删除 参数需要是迭代器
    printV(v1);

    v1.erase(v1.begin(), v1.end());//区间删除,头尾都是迭代器
    printV(v1);

    v1.clear();//清空
    printV(v1);
}

int main(){
    test1();
    //system("pause");
    return 0;
}