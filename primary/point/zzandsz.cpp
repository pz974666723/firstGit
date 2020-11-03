#include<iostream>
using namespace std;

int main(){
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int *p = arr;//arr即为首地址
    cout << "1：*p = " << *p << endl;
    cout << "1：p = " << p << endl;
    p++;//指针偏移
    cout << "2：*p = " << *p << endl;
    cout << "2：p = " << p << endl;
    //system("pause");
    return 0;
}