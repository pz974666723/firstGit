#include<iostream>
#include<string>
using namespace std;

class Father{
public:
    int a;
protected:
    int b;
private:
    int c;
};

class Son1 :public Father{
public:
    void func(){
        a = 10;
        b = 10;
        //私有无法访问
        //c = 10;
    }
};

class Son2 :protected Father{
public:
    void func(){
        a = 10;
        b = 10;
        //私有无法访问
        //c = 10;
    }
};

class Son3 :private Father{
public:
    void func(){
        a = 10;
        b = 10;
        //私有无法访问
        //c = 10;
    }
};

class Son2Son :public Son2{
    void func(){
        //保护继承 公共变保护 可继承无法访问
        a = 10;
        b = 10;
    }
};

class Son3Son :public Son3{
    void func(){
        //私有继承 公共，保护变私有 不可继承
        //a = 10;
        //b = 10;
    }
};

void test1(){
    Son1 s1;
    s1.a = 100;
    //公共继承
    ///s1.b = 100;

    Son2 s2;
    //保护继承 公共变保护
    //s2.a = 100;
    //s2.b = 100;

    Son3 s3;
    //私有继承 公共，保护变私有
    //s3.a = 100;
    //s3.b = 100;
}

int main(){
    test1();
    //system("pause");
    return 0;
}