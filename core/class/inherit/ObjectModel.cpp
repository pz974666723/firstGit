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

class Son :public Father{
public:
    int d;
};


//父类所有非静态成员属性都会被子类继承下去，无论公私
//私有属性只是被编译器隐藏了，无法访问
void test1(){
    cout << "size of son = " << sizeof(Son) << endl;
}

int main(){
    test1();
    //system("pause");
    return 0;
}