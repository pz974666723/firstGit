#include<iostream>
using namespace std;
//表达式1 ? 表达式2 ? :表达式3
//1为真，执行2，否则执行3
int main()
{
    int a, b, c ,heaviest;
    cout << "a = " << endl;
    cin >> a;
    cout << "b = " << endl;
    cin >> b;
    cout << "c = " << endl;
    cin >> c;
    heaviest = (a >= b ? a : b);
    heaviest = (heaviest >= c ? heaviest : c);
    cout << heaviest << endl;
    (a >= b ? a : b) = 1000;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
    //system("pause");

    return 0;
}