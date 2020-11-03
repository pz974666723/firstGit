#include<iostream>
#include<string>
using namespace std;

//类模板与继承

template<class T>
class Base{
    T m;
};

//class Son: public Base{};//错误，必须知道父类中T的类型，才能继承给子类
class Son: public Base<int>{

};

//如果想灵活指定出父类中T的类型，子类也需变为类模板
template<class T1, class T2>
class Son2: public Base<T2>{
    T1 obj;
};

void test1(){
    Son S1;
    Son2<int, char> S2;//T2即为char，父类模板中的T也为char
}

int main(){
    test1();
    //system("pause");
    return 0;
}