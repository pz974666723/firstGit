#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++){
        int j;
        j = i + 1;
        cout << "please input number " << j << ":" << endl;
        cin >> arr[i];
    }
    for (int i = 0; i < 5; i++){
        cout << arr[i] << "  " ;
    }
    cout << endl;
    //初始和末尾
    int start = 0;
    int end = sizeof(arr) / sizeof(arr[0]) - 1;
    int temp;
    for (; start < end;){
        temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
    for (int i = 0; i < 5; i++){
        cout << arr[i] << "  " ;
    }
        return 0;
}