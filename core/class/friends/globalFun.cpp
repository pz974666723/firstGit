#include<iostream>
#include<string>
using namespace std;

class Building{
    //友元操作全局函数
    friend void goodgay(Building &building);

public:
    Building(){
    m_sittingroom = "sittingroom";
    m_bedroom = "bedroom";
    }
public:
    string m_sittingroom;
private:
    string m_bedroom;
};

//全局函数访问私有成员,引用传递和地址传递都可修改实参,我是通过引用，视频通过地址
//值传递的方式同样可以实现本例
void goodgay(Building &building){
    cout << "goodgay go to your " << building.m_sittingroom << endl;
    cout << "goodgay go to your " << building.m_bedroom << endl;
}

void test1(){
    Building building;
    goodgay(building);
}

int main(){
    test1();
    //system("pause");
    return 0;
}