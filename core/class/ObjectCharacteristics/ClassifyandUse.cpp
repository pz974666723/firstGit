#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    //年龄属性
    int age;
    
    //分类： 有参 无参
    //       普通 拷贝
    //无参（普通）—— 默认
    Person(){
        cout << "PersonGZ(no) is using" << endl;
    }
    //有参（普通）
    Person(int a){
        age = a;
        cout << "PersonGZ(yes) is using" << endl;
    }
    
    //拷贝 拷贝不能改变本身因此是const，还需通过引用传入&
    Person(const Person &p){
        //将传入的人身上所以属性拷贝到我身上
        age = p.age;
        cout << "PersonGZ(copy) is using" << endl;
    }
//析构函数进行清理
    ~Person(){
        cout << "PersonXG is using" << endl;
    }
};

//测试
void test1(){
    //1.括号法
    Person p1;//调用默认
    Person p2(10);//调用有参
    Person p3(p2);//调用拷贝
    //注意：调用默认时不要加小括号  Person p1(); 这样会被编译器认为是函数声明，不会认为是创建对象
    cout << "p2 age = " << p2.age << endl;
    cout << "p3 age = " << p3.age << endl;

    //2.显示法
    Person p4 = Person(10);//调用有参  Person(10) 为匿名对象，当前行结束后系统回收
    Person p5 = Person(p2);//调用拷贝 Person(p2) 为匿名对象，当前行结束后系统回收
    //注意：不要利用拷贝构造 初始化匿名对象 Person(p5) 编译器会认为Person(p5) === Person p5
    
    //3.隐式转换法
    Person p6 = 10; //调用有参 相当于Person p6 = Person(10);
    Person p7 = p6;//调用拷贝
}

int main(){
    test1();

    //system("pause");
    return 0;
}