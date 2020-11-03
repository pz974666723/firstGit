#include<iostream>
#include<string>
using namespace std;

class Father{
public:
    Father(){
        cout << "Father GZ " << endl;
    }
    ~Father(){
        cout << "Father XG " << endl;
    }
};

class Son :public Father{
public:
    Son(){
        cout << "Son GZ " << endl;
    }
    ~Son(){
        cout << "Son XG " << endl;
    }
};


void test1(){
    //Father F;
    Son S;
}

int main(){
    test1();
    //system("pause");
    return 0;
}