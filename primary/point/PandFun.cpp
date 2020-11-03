#include<iostream>
using namespace std;
void swap01(int a, int b){
    int temp = a;
    a = b;
    b = temp;
    cout << "swap01 a = " << a << endl;
    cout << "swap01 b = " << b << endl;
}

void swap02(int *p1, int *p2){
    int temp = *p1;
    *p1 = *p2;
    *p2 = temp;
    cout << "swap02 a = " << *p1 << endl;
    cout << "swap02 b = " << *p2 << endl;
}
int main(){
    //值传递
    int a = 10;
    int b = 20;
    swap01(a, b);
    cout << "01:a = " << a << endl;
    cout << "01:b = " << b << endl;
    //地址传递,可以修改实参
    swap02(&a, &b);
    cout << "02:a = " << a << endl;
    cout << "02:b = " << b << endl;
    //system("pause");
    return 0;
}