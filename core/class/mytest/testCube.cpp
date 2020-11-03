#include<iostream>
#include<string>
using namespace std;

class Cube{
public:
    int m_l, m_w, m_h, m_s, m_v;

    void gets(){
        m_s = 2 * (m_l * m_w + m_l * m_h + m_w * m_h);
        cout << "square = " << m_s << endl;
    }

    void getv(){
        m_v = m_l * m_w * m_h;
        cout << "volume = " << m_v << endl;
    }

    //成员函数判断是否相等，只用传一个参数
    bool equalbyclass(Cube c){
    if (m_l == c.m_l && m_w == c.m_w && m_h == c.m_h){
        return 1;
    }
    else
        return 0;
    }
};

//全局函数判断是否相等,通过引用传递，要传两个参数
bool equal(Cube &c1, Cube &c2){
    if (c1.m_l == c2.m_l && c1.m_w == c2.m_w && c1.m_h == c2.m_h){
        return 1;
    }
    else
        return 0;
}

int main(){
    Cube c1, c2;
    c1.m_l = 10;
    c1.m_w = 10;
    c1.m_h = 10;
    c1.gets();
    c1.getv();

    c2.m_l = 10;
    c2.m_w = 10;
    c2.m_h = 12;
    c2.gets();
    c2.getv();

    bool ret = equal(c1, c2);
    
    if (ret){
        cout << "equal" << endl;
    }
    else
        cout << "not equal" << endl;

    ret = c1.equalbyclass(c2);
    if (ret){
        cout << "class: equal" << endl;
    }
    else
        cout << "class:not equal" << endl;
    //system("pause");
    return 0;
}