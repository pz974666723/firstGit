#include<iostream>
#include<string>
using namespace std;
//指针通过箭头来访问
//学生结构体
struct student{
    string name;
    int age;
    int score;
};
//老师结构体（因为其包含学生，因此需要先定义学生）
struct teacher{
    int id;
    string name;
    int age;
    struct student stu;
};

int main(){
    teacher t;
    t.id = 10086;
    t.name = "teacher Ma";
    t.age = 50;
    t.stu.name = "A";
    t.stu.age = 18;
    t.stu.score = 50;
    cout << t.id << endl;
    cout <<  t.name << endl;
    cout << t.age << endl;
    cout << t.stu.name << endl;
    cout << t.stu.age << endl;
    cout << t.stu.score << endl;

    //system("pause");
    return 0;
}