#include<iostream>
#include<string>
using namespace std;
//私有化好处：
//1.自己控制读写权限
//2.对于写可以检测数据的可读性
class Person{
public:
    //设置姓名
    void setname(string name){
        m_name = name;
    }
    //读取姓名
    string getname(){
        return m_name;
    }

    //获取年龄
    int getage(){
        return m_age;
    }


    //设置年龄
    void setage(int age){
        if (age < 0 || age >150){
            return;
        }
        else m_age = age;
    }

    //设置爱人
    string setlover(string lover){
        m_lover = lover;
        return m_lover;
    }
private:
    //姓名 可读写
    string m_name;
    //年龄 可读写（设置0~150范围）
    int m_age;
    //爱人 只写
    string m_lover;
};

int main(){
    Person p;
    p.setname("AA");
    cout << "name = " << p.getname() << endl;
    cout << "age = " << p.getage() << endl;
    p.setage(100);
    cout << "age = " << p.getage() << endl;
    p.setlover("BB");
    //cout << "age = " << p.m_lover << endl;//错误，只写

    //system("pause");
    return 0;
}