#include<iostream>
using namespace std;
/*乘法口诀表
列数*行数 = 计算结果
列数 <= 当前行数
*/

int main(){
    int i, j;
    for (i = 1; i < 9; i++){
        for (j = 1; j <= i; j++)
        {
            cout << j << " * " << i << " = " << i*j << "   ";
        }
        cout << endl;
    }
        //system("pause");
        return 0;
}