#include<iostream>
#include<string>
using namespace std;
//防止误操作
struct student{
    string name;
    int age;
    int score;
};

//将函数中形参改为指针，可以减少内存,且不会有新的副本出现
void printstudent(const student *stu){
    //stu->age = 11;  加入const会防止误操作，会报错
    cout << "fun name:" << stu->name
         << "  age:" << stu->age
         << "  score:" << stu->score << endl;
}

int main(){
    
    struct student stu = {"A", 18, 100};
    
    printstudent(&stu);
    //system("pause");
    return 0;
}