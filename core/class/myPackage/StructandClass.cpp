#include<iostream>
using namespace std;
//struct默认权限为public
//class默认权限为private

class C1{
    int m_A;
};

struct S1{
    int m_A;
};


int main(){
    C1 c1;
    //c1.m_A = 100;//不可访问
    S1 s1;
    s1.m_A = 100;
    //system("pause");
    return 0;
}