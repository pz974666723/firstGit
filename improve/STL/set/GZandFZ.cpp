#include <set>
#include<iostream>
using namespace std;

void PrintSet(set<int> &s){
    for(set<int>::iterator it=s.begin(); it!=s.end(); it++){
        cout << *it << " ";
    }
    cout << endl;
}

void test1(){
    set<int> s1;
    //插入只能insert
    s1.insert(10);
    s1.insert(40);
    s1.insert(30);
    s1.insert(20);
    s1.insert(30);
    PrintSet(s1);

    set<int> s2(s1);
    PrintSet(s2);

    set<int> s3;
    s3 = s2;
    PrintSet(s3);
}

int main(){
    test1();
    return 0;
}