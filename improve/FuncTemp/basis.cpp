#include<iostream>
#include<string>
using namespace std;

//交换整型函数
void swapInt(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

//交换浮点型函数
void swapDouble(double &a, double &b) {
	double temp = a;
	a = b;
	b = temp;
}


//函数模板
template<typename T> //模板声明，告诉编译器后面代码紧跟着的T不要报错，T是一个通用数据类型
void mySwap(T &a, T &b){
    T temp = a;
    a = b;
	b = temp;
}


int main(){
    int a = 10, b = 20;
    // swapInt(a, b);
    // cout << "a = " << a << endl;
    // cout << "b = " << b << endl;
    double c = 1.1, d = 2.2;
    // swapDouble(c, d);
    // cout << "c = " << c << endl;
    // cout << "d = " << d << endl;
    //system("pause");

    //两种使用模板方式
    //1.自动类型推导
    mySwap(a, b);
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //2.显示指定类型
    mySwap<double>(c, d);
    cout << "c = " << c << endl;
    cout << "d = " << d << endl;

    return 0;
}