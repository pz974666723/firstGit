#include<iostream>
#include<string>
#include<stack>
#include<vector>
using namespace std;

bool isLongPressedName(string name, string typed) {
    int nt = typed.size(), nn = name.size(), i=0, j=0;
    if(nn>nt) return 0;
    while(i<nn && j<nt){
        if(name[i] == typed[j]){
            if(name[i] == name[i+1]){
                i++;
                j++;
            }
            else{
                while(typed[j] == typed[j+1]) j++;
                i++;
                j++;
            }
        }
        else return 0;
    }
    if(i == nn && j==nt) return 1;
    else return 0;
}

int main(){
    cout << isLongPressedName("vtkgn", "vttkgnn") << endl;
    return 0;
}