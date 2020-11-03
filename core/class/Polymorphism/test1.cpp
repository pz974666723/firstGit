#include<iostream>
#include<string>
using namespace std;

//普通写法
class Calculator{
public:
    int getResult(string oper){
        if (oper == "+"){
            return m_num1 + m_num2;
        }
        else if(oper == "-"){
            return m_num1 - m_num2;
        }
        else if (oper == "*"){
            return m_num1 * m_num2;
        }
        //如果想扩展新功能"-"，需要修改源码
        //在真实开发中 提倡 开闭原则
        //开闭原则：对扩展进行开放 对修改进行关闭
        else if (oper == "/"){
            return m_num1 / m_num2;
        }
    }
    int m_num1;
    int m_num2;
};

//多态写法
//实现计算器的抽象类
/*  优点：
    1.代码组织结构清晰
    2.可读性强
    3.利于前期和后期的扩展以及维护
*/
class AbastractCalculator{
public:
    //虚函数
    virtual int getResult(){
        return 0;
    }
    int m_num1;
    int m_num2;
};
//加法计算器类
class AddCalculator: public AbastractCalculator{
public:
    int getResult(){
        return m_num1 + m_num2;
    }
};
//减法计算器类
class SubCalculator: public AbastractCalculator{
public:
    int getResult(){
        return m_num1 - m_num2;
    }
};
//乘法计算器类
class MulCalculator: public AbastractCalculator{
public:
    int getResult(){
        return m_num1 * m_num2;
    }
};

void test1(){
    Calculator c;
    c.m_num1 = 10;
    c.m_num2 = 10;
    cout << "+ : " << c.getResult("+") << endl;
    cout << "- : " << c.getResult("-") << endl;
    cout << "* : " << c.getResult("*") << endl;

}

void test2(){
    //多态使用条件
    //父类指针或者引用指向子类对象

    //加法运算
    //AddCalculator adc;
    AbastractCalculator *abc = new AddCalculator; //AbastractCalculator *abc = new AddCalculator 或者 创建一个子类AddCalculator adc;AbastractCalculator *abc = &adc;
    abc->m_num1 = 20;
    abc->m_num2 = 20;
    cout << "+ :" << abc->getResult() << endl;
    //用完后记得销毁
    delete abc;

    //减法运算
    abc = new SubCalculator;
    abc->m_num1 = 20;
    abc->m_num2 = 20;
    cout << "- :" << abc->getResult() << endl;
    delete abc;

    //乘法运算
    abc = new MulCalculator;
    abc->m_num1 = 20;
    abc->m_num2 = 20;
    cout << "* :" << abc->getResult() << endl;
    delete abc;
}

int main(){
    test1();
    cout << "================================" << endl;
    test2();
    //system("pause");
    return 0;
}