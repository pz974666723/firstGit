#include<iostream>
#include<string>
using namespace std;
/*
创建语法：
struct 类型名称{成员列表}
创建个体方式：
1.struct 结构体名 变量名
2.struct 结构体名 变量名 = {成员值1, 成员值2...}
3.定义结构体时顺便创建变量
*/
struct student{
        string name;
        int age;
        int score;
    }s3;
int main(){
    //创建定义时struct不可省略，创建个体时可
    
    struct student s1;
    s1.name = "A";
    s1.age = 18;
    s1.score = 100;
    cout << "name:" << s1.name << "  age:" << s1.age << "  score:" << s1.score << endl;
    
    struct student s2 = {"B", 17, 99};
    cout << "name:" << s2.name << "  age:" << s2.age << "  score:" << s2.score << endl;

    //s3在定义时已创建
    s3.name = "C";
    s3.age = 18;
    s3.score = 60;
    cout << "name:" << s3.name << "  age:" << s3.age << "  score:" << s3.score << endl;
    //system("pause");
    return 0;
}