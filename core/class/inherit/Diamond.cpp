#include<iostream>
#include<string>
using namespace std;

class Animal{
public:
    int m_age;
};
//利用虚继承解决问题2，加上关键字virtual，Animal称为虚父类
class Yang: virtual public Animal{

};
class Tuo: virtual public Animal{

};
class Yangtuo: public Yang, public Tuo{
};

void test1(){
    Yangtuo yt;
    yt.Yang::m_age = 18;
    yt.Tuo::m_age = 28;
    //1.父类有相同数据时，通过作用域区分
    cout << "yt(Yang) m_age = " << yt.Yang::m_age << endl;
    cout << "yt(Tuo) m_age = " << yt.Tuo::m_age << endl;
    cout << "yt(Tuo) m_age = " << yt.m_age << endl;
    //2.实际上，只需要一个数据（羊驼只需要一个年龄），同时这也会造成资源浪费
}

int main(){
    test1();
    //system("pause");
    return 0;
}