#include<iostream>
#include<string>
#include<functional>
#include<vector>
#include<algorithm>
using namespace std;
//大于 greater

void test1(){
    vector<int> v;
    v.push_back(10);
    v.push_back(30);
    v.push_back(50);
    v.push_back(20);
    v.push_back(40);
    for (vector<int>::iterator it = v.begin(); it != v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
    sort(v.begin(), v.end(), greater<int>());
    //sort的默认使用的是less<T>()
    for (vector<int>::iterator it = v.begin(); it != v.end();it++){
        cout << *it << " ";
    }
    cout << endl;
}

int main(){
    test1();
    //system("pause");
    return 0;
}