#include<iostream>
using namespace std;
/*
1. 数据类型 数组名[ 行数 ][ 列数 ] ;
2. 数据类型 数组名[ 行数 ][ 列数 ] = { {数据1, 数据2}, {数据3, 数据4} } ;
3. 数据类型 数组名[ 行数 ][ 列数 ] = {数据1, 数据2, 数据3, 数据4} ;
4. 数据类型 数组名[  ][ 列数 ] = {数据1, 数据2, 数据3, 数据4} ;
*/
int main(){
    int arr1[2][3];
    arr1[0][0] = 1;
    arr1[0][1] = 2;
    arr1[0][2] = 3;
    arr1[1][0] = 4;
    arr1[1][1] = 5;
    arr1[1][2] = 6;
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }

    int arr2[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
     };
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << arr2[i][j] << " ";
        }
        cout << endl;
    }

    int arr3[2][3] = {1,2,3,4,5,6};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << arr3[i][j] << " ";
        }
        cout << endl;
    }

    int arr4[][3] = {1,2,3,4,5,6};
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 3; j++){
            cout << arr4[i][j] << " ";
        }
        cout << endl;
    }
    //行数
    cout << "hang shu :" << sizeof(arr1) / sizeof(arr1[0]) << endl;
    //列数
    cout << "lie shu :" << sizeof(arr1[0]) / sizeof(arr1[0][0]) << endl;
    //system("pause");
    return 0;
}