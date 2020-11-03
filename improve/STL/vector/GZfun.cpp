/*
vector<T> v; //采用模板实现类实现，默认构造函数
vector(v.begin(), v.end()); //将  v [ begin(), end() )  区间中的元素拷贝给本身。
vector(n, elem); //构造函数将n个elem拷贝给本身。
vector(const vector &vec); //拷贝构造函数。
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector的构造函数

void printV(vector<int>&v){
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test1(){
    vector<int> v1;//1.默认构造 无参构造
    for (int i = 0; i<10; i++){
        v1.push_back(i);
    }
    printV(v1);

    vector<int> v2(v1.begin(),v1.end());//2.通过区间方式进行构造
    printV(v2);

    vector<int> v3(10, 100);//3.n个elem方式构造
    printV(v3);

    vector<int> v4(v3);//4.拷贝构造
    printV(v4);
}

int main(){
    test1();
    //system("pause");
    return 0;
}