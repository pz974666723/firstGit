#include<iostream>
#include<string>
using namespace std;

class student{
public:
    string m_name;
    long long m_num;
    void show(){
        cout << "name: " << m_name << endl;
        cout << "num: " << m_num << endl;
    }
    void setname(string name){
        m_name = name;
    }
    void setnum(long long num){
        m_num = num;
    }
};

int main(){
    student st1;
    string name;
    long long num;
    cout << "input name: " << endl;
    cin >> name;
    cout << "input num: " << endl;
    cin >> num;
    st1.setname(name);
    st1.setnum(num);
    st1.show();

    //system("pause");
    return 0;
}