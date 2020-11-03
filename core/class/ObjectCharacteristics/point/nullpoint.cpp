#include<iostream>
#include<string>
using namespace std;

class Person{
public:
    void showclassname(){
        cout << "classPerson" << endl;
    }
    void showPersonAge(){
        //防止报错，但其实vscode没有报错 vs可能报错
        if (this == NULL){
            return;
        }
        cout << "classPersonAge = " << this->m_age << endl;
    }

    int m_age;
};

void test1(){
    Person *p = NULL;
    p->showclassname();
    p->m_age = 10;
    p->showPersonAge();
}

int main(){
    test1();
    //system("pause");
    return 0;
}