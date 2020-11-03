#include<iostream>
#include<string>
using namespace std;

struct hero{
    string name;
    int age;
    string sex;
};

void bubblesort(hero arr[], int len){
    for (int i = 0; i < len - 1; i++){
        for (int j = 0; j < len - i - 1; j++){
            hero temp;
            if(arr[j].age > arr[j + 1].age){
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void printhero(hero arr[], int len){
    cout << "after:" << endl;
    for (int i = 0; i < len; i++){
        cout << "name:" << arr[i].name << "  age:" << arr[i].age << "  sex:" << arr[i].sex << endl;
    }
}

int main(){
    hero arr[5] = {
        {"liubei\t", 23, "M"},
        {"guanyu\t", 22, "M"},
        {"zhangfei\t", 20, "M"},
        {"zhaoyun\t", 21, "M"},
        {"diaochan\t", 19, "W"}};
    int len = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < len; i++){
        cout << "name:" << arr[i].name << "  age:" << arr[i].age << "  sex:" << arr[i].sex << endl;
    }

    bubblesort(arr, len);

    printhero(arr, len);

    //system("pause");
    return 0;
}