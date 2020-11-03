#include<iostream>
#include<string>
//1
#include<fstream>
using namespace std;

//文本文件 读文件

void test1(){
    //2.
    ifstream ifs;
    //3.打开并判断是否打开成功
    ifs.open("test.txt", ios::in);
    if (!ifs.is_open()){
        cout << "open fail" << endl;
        return;
    }
    //4.四种读取方式
    //第一种(空格处会换行)
    // char buf[1024] = {0};
    // while(ifs >> buf){
    //     cout << buf << endl;
    // }
    //第二种(空格处不会换行)
    // char buf[1024] = {0};
    // while( ifs.getline(buf, sizeof(buf))){
    //     cout << buf << endl;
    // }
    //第三种（推荐）(空格处不会换行)
    string buf;
    while (getline(ifs, buf)){
        cout << buf << endl;
    }
    //第四种（不推荐）(空格处不会换行)
    // char c;
    // while ( (c = ifs.get()) != EOF ){
    //     cout << c;
    // }
    //5.
    ifs.close();
}

int main(){
    test1();
    //system("pause");
    return 0;
}