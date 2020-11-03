#include<iostream>
using namespace std;

int main(){
    int arr[] = {4, 2, 8, 0, 5, 7, 1, 3, 9};
    for (int i = 0; i < 9 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    //外循环（轮数0~7）：元素个数 - 1   （9-1=8）
    for (int i = 0; i < 9 - 1; i++){
        //内循环（轮数）：元素个数 - 当前轮数 - 1   （9-0-1=8）
        for (int j = 0; j < 9 - i - 1; j++){
            if (arr[j] > arr[j + 1]){
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    for (int i = 0; i < 9 ; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    //system("pause");
    return 0;
}