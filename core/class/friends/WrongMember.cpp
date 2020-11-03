#include<iostream>
#include<string>
using namespace std;

//告诉程序有class Goodgay这个类
class Goodgay;

class Building{
    //友元操作成员函数，成员函数需要作用域
    friend void Goodgay::visit();

public:
    Building();//类内声明
public:
    string m_sittingroom;
private:
    string m_bedroom;
};

class Goodgay{
public:
    Goodgay();

    void visit();//visit访问Building中的私有成员
    void visit2();//visit不可访问Building中的私有成员（即正常情况下）

    Building *building;//成员变量
};

//类外实现 作用域下
Building::Building(){
    m_sittingroom = "sittingroom";
    m_bedroom = "bedroom";
}

Goodgay::Goodgay(){
    building = new Building;
}
void Goodgay::visit(){
    cout << "goodgay visit:" << building->m_sittingroom << endl;
    //cout << "goodgay visit:" << building->m_bedroom << endl;
}
void Goodgay::visit2(){
    cout << "goodgay visit:" << building->m_sittingroom << endl;
    //cout << "goodgay visit:" << building->m_bedroom << endl;//非友元成员函数无法访问
}

void test01(){
    Goodgay gg;
    gg.visit();
    gg.visit2();
}

int main(){
    test01();
    //system("pause");
    return 0;
}