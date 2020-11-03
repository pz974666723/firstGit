#include<iostream>
using namespace std;
/*
do{
    循环语句
}
while{
    循环条件
}

do while会先执行一次循环语句，再判断循环条件
*/
int main(){
    int i = 0;
    do{
        cout << i << endl;
        i++;
    }
     while (i < 10);
    //system("pause");
    return 0;
}