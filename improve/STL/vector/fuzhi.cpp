/*
vector& operator=(const vector &vec);//重载等号操作符
assign(beg, end); //将[beg, end)区间中的数据拷贝赋值给本身。
assign(n, elem); //将n个elem拷贝赋值给本身。
*/
#include<iostream>
#include<string>
#include<vector>
using namespace std;

//vector的赋值操作

void printV(vector<int>&v){
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test1(){
    vector<int> v1;
    for (int i = 0; i<10; i++){
        v1.push_back(i);
    }
    printV(v1);

    vector<int> v2;
    v2 = v1;//1.
    printV(v2);

    vector<int> v3;
    v3.assign(v1.begin(), v1.end());//2.
    printV(v3);

    vector<int> v4;
    v4.assign(10, 100);//3. 和构造中的(n, elm)形式相同，意义不同
    printV(v4);
}
int main(){
    test1();
    //system("pause");
    return 0;
}