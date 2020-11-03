#include<iostream>
#include<string>
using namespace std;

class Building{
    //友元操作类
    friend class Goodgay;

public:
    Building();//类外实现
public:
    string m_sittingroom;
private:
    string m_bedroom;
};

class Goodgay{
public:
    Goodgay();
    void visit();
    Building *building;//成员变量
    //Building building;//未在堆区创建，但运行结果一样
};

//类外写成员函数（构造函数）
Building::Building(){
    m_sittingroom = "sittingroom";
    m_bedroom = "bedroom";
}
Goodgay::Goodgay(){
    building = new Building;//在堆区创建一个Building的对象， Building *building指向该对象
}
//类外写成员函数
void Goodgay::visit(){
    cout << "goodgay visit:" << building->m_sittingroom << endl;
    //cout << "goodgay visit:" << building.m_sittingroom << endl;
    cout << "goodgay visit:" << building->m_bedroom << endl;
    //cout << "goodgay visit:" << building.m_bedroom << endl;
}

void test01(){
    Goodgay gg;
    gg.visit();
}

int main(){
    test01();
    //system("pause");
    return 0;
}