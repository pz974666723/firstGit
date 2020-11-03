#pragma once//防止头文件重复包含
#include<iostream>
using namespace std;
#include "point.h"

class Circle{
public:
    int m_r;
    Point center;
    //成员函数只需要声明
    void showradius();
};