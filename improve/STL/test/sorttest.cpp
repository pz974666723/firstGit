#include<iostream>
#include<string>
using namespace std;

int main(){
    int r[6] = {0, 6, 5, 3, 4, 2};
    int i, j;
    for (i = 2; i < 6; i++){
        if (r[i] < r[i - 1] ){
            r[0] = r[i];
            for (j = i - 1; r[j] > r[0]; ){
                r[j + 1] = r[j];
                j--;
            }
            r[j + 1] = r[0];
        }
    }
    for (i = 0; i < 6; i++){
        cout << r[i] << endl;
    }
        return 0;
}