#include<iostream>
#include<string>
using namespace std;
/*

*/

class Person{
public:
    Person(){
        cout << "PersonGZ(no) is using" << endl;
    }
    
    Person(int age, int height){
        m_age = age;
        m_height = new int(height);//创建到堆区
        cout << "PersonGZ(yes) is using" << endl;
    }
    
    Person(const Person &p){
        m_age = p.m_age;
        cout << "PersonGZ(copy) is using" << endl;
        //浅拷贝操作 编译器默认实现
        //m_height = p.m_height;

        //深拷贝操作
        m_height = new int(*p.m_height);
    }
    //析构函数进行清理
    ~Person(){
        //将堆区开辟的数据释放
        if (m_height != NULL){
            delete m_height;
            m_height = NULL;//将该指针置空，防止野指针
        }
        cout << "PersonXG is using" << endl;
    }

    int m_age;
    int *m_height;
};

void test1(){
    Person p1(18, 160);
    cout << "p1 age:" << p1.m_age << " p1 height:" << *p1.m_height << endl;
    cout << "p1 &height:" << p1.m_height << endl;

    Person p2(p1);
    p2.m_age = 0;
    cout << "p2 age:" << p2.m_age << " p2 height:" << *p2.m_height << endl;
    cout << "p1 age:" << p2.m_age << " p1 height:" << *p1.m_height << endl;
    //深拷贝时，m_height的地址不同，会析构两次
    //浅拷贝时，m_height的地址相同，只析构一次，会造成混乱
    cout << "p2 &height:" << p2.m_height << endl;
}

int main(){
    test1();
    return 0;
}