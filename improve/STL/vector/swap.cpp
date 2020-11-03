/*
swap(vec); // 将vec与本身的元素互换
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
//1.基本使用
void test1(){
    vector<int> v1;
    for(int i = 0; i<10; i++){
        v1.push_back(i);
    }
    cout << "before : " << endl;
    cout << "v1 : " << endl;
    printV(v1);
    vector<int> v2;
    for(int i = 10; i>0; i--){
        v2.push_back(i);
    }
    cout << "v2 : " << endl;
    printV(v2);
    cout << "swap : " << endl;
    v1.swap(v2);
    cout << "v1 : " << endl;
    printV(v1);
    cout << "v2 : " << endl;
    printV(v2);
}

//2.实际用途
//巧用swap可以收缩内存空间
void test2(){
    vector<int> v;
    for(int i=0; i<100000; i++){
        v.push_back(i);
    }
    cout << "v.capacity :" << v.capacity() << endl;
    cout << "v.size :" << v.size() << endl;

    v.resize(3);//重新指定大小，大小变了，但容量没变，造成浪费
    cout << "v.capacity :" << v.capacity() << endl;
    cout << "v.size :" << v.size() << endl;
    //巧用swap收缩内存
    vector<int>(v).swap(v);
    //vector<int>(v) 是匿名对象，利用拷贝构造函数创建了一个新的对象
    //匿名对象运行完后自动析构
    cout << "v.capacity :" << v.capacity() << endl;
    cout << "v.size :" << v.size() << endl;
}

int main(){
    //test1();
    test2();
    //system("pause");
    return 0;
}