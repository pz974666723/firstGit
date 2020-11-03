#include<iostream>
using namespace std;
/*
switch(表达式){
    case 结果1: 执行语句; break;
    case 结果2: 执行语句; break;
    ...
    default: 执行语句; break;
}

switch
缺点: 只能判断整型或字符型，无法判断区间，需要break
优点: 结构清晰，执行效率高
*/

int main(){
    //给电影打分
    cout << "please input a score(0 ~ 10) :" << endl;
    int score = 0;
    cin >> score;
    switch(score){
        case 10:
            cout << "perfect" << endl;
            break;
        case 9:
            cout << "very good" << endl;
            break;
        case 8:
            cout << "good" << endl;
            break;
        case 7:
            cout << "just-so-so" << endl;
            break;
        default:
            cout << "so bad" << endl;
            break;
    }
    //system("pause");

    return 0;
}