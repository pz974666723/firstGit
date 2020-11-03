#include<iostream>
using namespace std;
#include<string>

int main(){
    int sums[3];
    string names[3] = {"A", "B", "C"};
    int score[3][3] = {
        {100, 100, 100},
        {90, 50, 100},
        {60, 70, 80}
    };
    for (int i = 0; i < 3; i++){
        int sum = 0;
        for (int j = 0; j < 3; j++){
            sum += score[i][j];
            cout << score[i][j] << "\t";
        }
        sums[i] = sum;
        cout << endl;
    }
    for (int i = 0; i < 3; i++){
        cout << sums[i] << "\t";
    }
    cout << endl;
    for (int i = 0; i < 3; i++){
        cout << names[i] << "的分数:" << sums[i] << endl;
    }
        //system("pause");
        return 0;
}