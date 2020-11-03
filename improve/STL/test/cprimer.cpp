#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

int staticTest(){
    static int test = 0;
    ++test;
    return test;
}

int main(){

    //vector<string> v(1);
    //v[0] = "aaaa";
    // vector<int> vi;
    // vi.push_back(1);
    //cout << v[0];
    // cout << vi[0];
    // vector<string> s1(10);
    // vector<string> s2{10};


    // const string s = "keep";
    // for(auto &c:s){
    //     cout << c << endl;
    // }
    // cout << (s.end() > s.begin()) << endl;


    // int arr[10] = {1,2};
    // int (*q)[10] = &arr;
    // cout << (*q)[0] << endl;

    for (int i = 0; i < 10; i++){
        cout << staticTest() << endl;
    }
    return 0;
}