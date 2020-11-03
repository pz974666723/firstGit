#include<iostream>
using namespace std;
/*
1.数据类型 数组名 [数组长度] ；
2.数据类型 数组名 [数组长度] = {值1,值2 ...} ；
3.数据类型 数组名 [ ] = {值1,值2 ...} ；
*/

int main(){
    int arr1[5];
    arr1[0] = 10;
    arr1[1] = 10;
    arr1[2] = 10;
    arr1[3] = 10;
    arr1[4] = 10;
    cout << "sizeof(arr1) = " << sizeof(arr1) << endl;
    cout << "sizeof(arr1[0]) = " << sizeof(arr1[0]) << endl;

    int arr2[5] = {20, 30, 40, 50, 60};
    //通过循环输出数组
    for (int i = 0; i < 5; i++){
        cout << arr2[i] << endl;
    }
        

    int arr3[] = {1, 2, 3, 4, 5, 6};
    //获取首地址
    cout << arr3 << endl;
    cout << &arr3[0] << endl;
    //system("pause");
    return 0;
}