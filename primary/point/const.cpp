#include<iostream>
using namespace std;
/*
1.const修饰指针——常量指针 const int *p
 （指针的指向可修改，但指针指向的值不可改）
2.const修饰常量——指针常量 int *const p
 （指针的指向不可改，但指针指向的值可修改）
3.const即修饰指针，又修饰常量 const int *const p 
  (都不可改)
*/

int main(){
    int a = 10;
    int b = 20;

    const int *p1 = &a;
    //*p1 = 20;
    p1 = &b;

    int *const p2 = &a;
    *p2 = 20;
    //p2 = &b;

    const int *const p3 = &a;
    //*p3 = 20;
    //p3 = &b;

    //system("pause");
    return 0;
}