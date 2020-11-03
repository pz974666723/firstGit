#include<iostream>
using namespace std;

int main()
{
    int score = 0;
    cout << "please input a score: " << endl;
    cin >> score;
    cout << "your score: " << endl;
    if (score > 600)
    {
        cout << "class one" << endl;
        if (score > 700)
        {
             cout << "TSU" << endl;
        }
    }
    else if (score > 500)
    {
        cout << "class two" << endl;
    }
    else
    {
        cout << "class three" << endl;
    }
    //system("pause");

    return 0;
}