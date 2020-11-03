#include<iostream>
using namespace std;
//1.无参无返
void test1(){
    cout << "01: 1" << endl;
}
//2.有参无返
void test2(int a){
    cout << "02: " << a << endl;
}
//3.无参有返
int test3(){
    cout << "03: " << endl;
    return 3;
}
//4.有参有返
int test4(int b){
    cout << "04: " << endl;
    return b;
}
int main(){
    test1();

    test2(2);

    int a = test3();
    cout << "a = " << a << endl;

    int b = test4(4);
    cout << "b = " << b << endl;    
    
    return 0;
}