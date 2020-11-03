#include<iostream>
#include<string>
using namespace std;


class Point{
public:
    int p_x, p_y;
    void showcoordinate(){
        cout << "x, y =  " << p_x << ", " << p_y << endl;
    }
};

class Circle{
public:
    int m_r;
    Point center;//圆心,在类中可让另一个类作为成员
    void showradius(){
        cout << "radius = " << m_r << endl;
    }
};

void inside(Point &p, Circle &c)
{
    long d2, r2;
    d2 = (p.p_x - c.center.p_x) * (p.p_x - c.center.p_x) + (p.p_y - c.center.p_y) * (p.p_y - c.center.p_y);
    r2 = c.m_r * c.m_r;
    if(d2 == r2){
        cout << "on circle" << endl;
    }
    else if(d2 > r2){
        cout << "out of circle" << endl;
    }
    else{
        cout << "in circle" << endl;
    }
}

int main(){
    Point p;
    Circle c;
    cout << "center_x" << endl;
    cin >> c.center.p_x ;
    cout << "center_y" << endl;
    cin >> c.center.p_y ;
    cout << "center_r" << endl;
    cin >> c.m_r ;
    cout << "point_x" << endl;
    cin >> p.p_x ;
    cout << "point_y" << endl;
    cin >> p.p_y ;
    cout << "point:" << endl;
    p.showcoordinate();
    cout << "center:" << endl;
    c.center.showcoordinate();
    c.showradius();
    inside(p, c);

    //system("pause");
    return 0;
}