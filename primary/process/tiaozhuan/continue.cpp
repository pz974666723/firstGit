#include<iostream>
using namespace std;
/*
continue执行到本行就跳过本行执行下一次循环
break则为直接退出循环
*/
int main(){
    for (int i = 0; i <= 100; i++){
        if(i % 2 == 0){
            continue;
        }
        cout << i << endl;
    }
        //system("pause");
        return 0;
}