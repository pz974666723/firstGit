#include<iostream>
#include<string>
using namespace std;
//指针通过箭头来访问
//定义
struct student{
    string name;
    int age;
    int score;
};

int main(){
    
    struct student stu = {"A", 18, 100};
    student *p = &stu;

    cout << "name:" << p->name
         << "  age:" << p->age
         << "  score:" << p->score << endl;
    //system("pause");
    return 0;
}