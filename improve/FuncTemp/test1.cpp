/*
案例描述：
利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
排序规则从大到小，排序算法为选择排序
分别利用char数组和int数组进行测试
*/
#include<iostream>
#include<string>
using namespace std;

template<class T>
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
    b = temp;
}

//排序算法 sort选择排序
template<class T>
void mySort(T arr[], int len){
    for (int i = 0; i<len ; i++){
        int max = i;
        for(int j = i+1; j < len; j++){
            if (arr[max] < arr[j]){
                max = j;
            }
        }
        if (max != i){
            mySwap(arr[max], arr[i]);
        }
    }
}

template<class T>
void myPrint(T arr[], int len){
    for(int i = 0; i<len; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void test1(){
    char charArr[] = "bdcfeagh";
    int len = sizeof(charArr)/sizeof(char);
    mySort(charArr, len);
    myPrint(charArr, len);
}
void test2(){
    int intArr[] = {1,3,5,9,3,6,7};
    int len = sizeof(intArr)/sizeof(int);
    mySort(intArr, len);
    myPrint(intArr, len);
}

int main(){
    test1();
    test2();
    //system("pause");
    return 0;
}