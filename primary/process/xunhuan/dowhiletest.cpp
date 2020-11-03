#include<iostream>
using namespace std;

int main(){
    int a, b, c, num;
    a = 1;
    b = 0;
    c = 0;
    num = 100;
    do{
        if(num == (a*a*a) + (b*b*b) + (c*c*c) ){
            cout << num << endl;
        }
    num++;
    a = num / 100;
    b = (num - a * 100) / 10;  //(num/10)%10
    c = (num - a * 100 - b * 10);  //num%10
    } while (num < 1000);
    //system("pause");
    return 0;
}