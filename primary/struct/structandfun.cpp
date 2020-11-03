#include<iostream>
#include<string>
using namespace std;
//结构体做函数的参数

struct student{
    string name;
    int age;
    int score;
};

//值传递
void printstudent1(struct student stu){
    stu.name = "A1";
    cout << " print1   name:" << stu.name
         << "  age:" << stu.age
         << "  score:" << stu.score << endl;
}
//地址传递
void printstudent2(struct student *p){
    p->name = "A2";
    cout << " print2   name:" << p->name
         << "  age:" << p->age
         << "  score:" << p->score << endl;
}
int main(){
    
    struct student stu = {"A", 18, 100};
    cout << " main   name:" << stu.name
         << "  age:" << stu.age
         << "  score:" << stu.score << endl;
    printstudent1(stu);
    cout << " main   name:" << stu.name
         << "  age:" << stu.age
         << "  score:" << stu.score << endl;
    printstudent2(&stu);
    cout << " main   name:" << stu.name
         << "  age:" << stu.age
         << "  score:" << stu.score << endl;
    //system("pause");
    return 0;
}