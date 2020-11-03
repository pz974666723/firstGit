#include<iostream>
#include<string>
using namespace std;

// struct 结构体名 数组名[元素个数] = {  {}，{}，...{}  }

//定义
struct student{
    string name;
    int age;
    int score;
    };

int main(){
    
    struct student stuarr[3] = {
        {"A", 18, 100},
        {"B", 18, 90},
        {"C", 19, 60}
    };
    stuarr[2].name = "D";

    for (int i = 0; i < 3; i++)
    {
        cout << "name:" << stuarr[i].name 
             << "  age:" << stuarr[i].age 
             << "  score:" << stuarr[i].score << endl;
    }
        //system("pause");
        return 0;
}