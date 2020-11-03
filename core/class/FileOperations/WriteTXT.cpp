#include<iostream>
#include<string>
//1.头文件
#include<fstream>
using namespace std;

//文本文件 写文件

void test1(){
    //2.创建流对象
    ofstream ofs;
    //3.指定打开方式
    ofs.open("test.txt", ios::out);//默认指定路径
    //4.写内容
    ofs << "name:Paul" << endl;
    ofs << "sex: man" << endl;
    ofs << "age : 18" << endl;
    //5.关闭文件
    ofs.close();
}

int main(){
    test1();
    //system("pause");
    return 0;
}