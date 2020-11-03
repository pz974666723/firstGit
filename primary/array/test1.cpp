#include<iostream>
using namespace std;

int main(){
    int arr[5];
    for (int i = 0; i < 5; i++){
        cout << "please input " << i << " weight :" << endl;
        cin >> arr[i];
    }
    int max ;
    max = arr[0];
    for (int i = 0; i < 4; i++){
        if (max <= arr[i+1]){
            max = arr[i+1];
        }
    }
    cout << "max = " << max << endl;
    return 0;
}