#include<iostream>
using namespace std;
/*for(起始表达式;结束条件表达式;末尾循环体){
    循环语句;
}
example:
for (int i = 0; i<10 ; i++){
    cout << i << endl;
}

for(;;)也可以
*/
int main(){
    int i;
    for (i = 1; i < 101; i++){
        if(i%7 == 0 || i%10 == 7 || i/10 == 7){
            cout << "knock" << endl;
        }
        else{
            cout << i << endl;
        }
    }
        //system("pause");
        return 0;
}