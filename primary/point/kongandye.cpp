#include<iostream>
using namespace std;

int main(){
    //指针变量p指向内存地址编号为 0 的空间
    //访问空指针报错
    //内存编号 0~255 为系统占用，无法访问
    int *p1 = NULL;
    
    //野指针
    //int *p2 = (int *)0x1100;

    //system("pause");
    return 0;
}