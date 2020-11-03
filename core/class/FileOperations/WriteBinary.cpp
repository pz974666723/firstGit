#include<iostream>
#include<string>
//1.
#include<fstream>
using namespace std;

//二进制文件 写文件
class Person{
public:
    char m_name[64];//写字符串使用c++的string可能会造成问题，因此使用字符数组
    int m_age;
};

void test1(){
    //2.
    ofstream ofs;
    //2 和 3合并： ofstream ofs("person.txt", ios::out | ios::binary);
    //3.
    ofs.open("person.txt", ios::out | ios::binary);
    //4.核心步骤
    Person p = {"Paul", 18};
    ofs.write((const char *)&p, sizeof(p));
    //5.
    ofs.close();
}

int main(){
    test1();
    //system("pause");
    return 0;
}