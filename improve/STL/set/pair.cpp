#include <set>
#include<iostream>
#include<string>
using namespace std;

void test1(){
    pair<string, int> p1("paul", 15);
    pair<string, int> p2;
    p2 = make_pair("tom", 16);
    cout << p1.first << " " << p1.second << endl;
    cout << p2.first << " " << p2.second << endl;
}

int main(){
    test1();
    return 0;
}