#include<iostream>
using namespace std;
/*
1.switch
2.循环语句
3.嵌套循环，跳出内循环
*/
int main(){
    for (int i = 0; i < 11; i++){
        for (int j = 0; j < i; j++){
            cout << " * " ;
            if(j == 7){
                break;
            }
        }
        cout << endl;
            
    }
        //system("pause");
        return 0;
}