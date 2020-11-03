#include<iostream>
#include<string>
#include<ctime>
using namespace std;

struct student{
    string name;
    int score;
};

struct teacher{
    string name;
    student sarr[5];
};

//给老师赋值
void allocatespace(teacher tarr[], int len){
    string nameseed = "ABCDE";
    string numseed = "abcdefghijklmnopqrstuvw";
    for (int i = 0; i < len; i++){
        tarr[i].name = "teacher_";
        tarr[i].name += nameseed[i];
        for (int j = 0; j < 5; j++){
            tarr[i].sarr[j].name = "student_";
            tarr[i].sarr[j].name += nameseed[j];
            tarr[i].sarr[j].name += numseed[i + j];
            int random = rand() % 61 + 40; //0~100
            tarr[i].sarr[j].score = random;
        }
    }
}

//打印信息
void printinfo(teacher tarr[], int len){
    for (int i = 0; i < len; i++){
        cout << "teacher name:" << tarr[i].name << endl;

        for (int j = 0; j < 5; j++){
            cout << "\tstudent name:" << tarr[i].sarr[j].name 
            << "  student score:" << tarr[i].sarr[j].score << endl;
        }
    }
}
int main(){
    //随机数种子（随时间）
    srand((unsigned int)time(NULL));
    teacher tarr[3];
    int len = sizeof(tarr) / sizeof(tarr[0]);
    allocatespace(tarr, len);
    printinfo(tarr, len);
    return 0;
}