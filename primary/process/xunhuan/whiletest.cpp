#include<iostream>
using namespace std;
//系统时间头文件
#include<ctime>

int main(){
    //添加时间种子，利用当前时间生成随机数
    srand((unsigned int)time(NULL));

    int num = rand() % 100 + 1; //生成(0 ~ 99)+1的随机数
    cout << "num = " << num << endl;

    int val = 0;
    int i = 0;
    while(1){
        cout << "please input:" << endl;
        cin >> val;
        if(val > num){
            cout << "large" << endl;
        }
        else if(val < num){
            cout << "small" << endl;
        }
        else{
            cout << "right" << endl;
            break;
        }
        i++;
        if(i == 5){
            cout << "game over" << endl;
            break;
        }
    }
    //system("pause");
    return 0;
}