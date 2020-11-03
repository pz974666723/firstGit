#include<iostream>
using namespace std;
//class 类名{  访问权限： 属性 / 行为}；
//圆的周长： 2*PI*r

const double PI = 3.14;

class circle{
    //访问权限：
    //公共权限
public:
    //属性（数据成员.变量）：
    //半径
    int r;
    //行为（成员函数.函数）：
    //获取圆的周长
    double calculateC(){
        return 2 * PI * r;
    }
};

int main(){
    //通过圆类创建具体的圆（对象）
    circle c1;
    c1.r = 10;
    cout << "C = " << c1.calculateC() << endl;
    //system("pause");
    return 0;
}