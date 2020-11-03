#include<iostream>
using namespace std;

//冒泡排序函数
void bubbleSort (int *arr, int len){
    for (int i = 0; i < len - 1; i++){
        for (int j = 0; j < len - i - 1; j++){
            int temp = 0;
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

//打印数组
void printarr(int *arr, int len){
    for (int i = 0; i < len; i++){
        cout << arr[i] << endl;
    }
}

int main(){
    int arr[] = {9, 5, 6, 7, 2, 3, 1, 4, 8};
    int *p = arr;
    int len = sizeof(arr) / sizeof(arr[0]);
    bubbleSort(arr, len);
    printarr(p, len);
    cout << arr;
    //system("pause");
    return 0;
}