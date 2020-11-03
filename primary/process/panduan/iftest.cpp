#include<iostream>
using namespace std;

int main()
{
    int a, b, c;
    cout << "a = " << endl;
    cin >> a;
    cout << "b = " << endl;
    cin >> b;
    cout << "c = " << endl;
    cin >> c;
    
    if (a >= b)
    {
        if (a >= c){
            cout << "a is heaviest" << endl;
        }
        else{
            cout << "c is heaviest" << endl;
        } 
    }
    else
    {
        if (b >= c){
            cout << "b is heaviest" << endl;
        }
        else{
            cout << "c is heaviest" << endl;
        } 
    }

    return 0;
}