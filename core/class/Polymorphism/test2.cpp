#include<iostream>
#include<string>
using namespace std;

class Drink{
public:
    virtual void Boil() = 0;
    virtual void rush() = 0;
    virtual void pour() = 0;
    virtual void add() = 0;
    void makeDrink(){
        Boil();
        rush();
        pour();
        add();
    }
};

class Coffee: public Drink{
    void Boil(){
        cout << "boil water" << endl;
    }
    void rush(){
        cout << "rush coffee" << endl;
    }
    void pour(){
        cout << "pour in box" << endl;
    }
    void add(){
        cout << "add sugar" << endl;
        cout << "add milk" << endl;
    }
};

class Tea: public Drink{
    void Boil(){
        cout << "boil water" << endl;
    }
    void rush(){
        cout << "rush tea" << endl;
    }
    void pour(){
        cout << "pour in box" << endl;
    }
    void add(){
        cout << "add lemon" << endl;
    }
};

void test1(){
    Drink *drink = new Coffee;
    drink->makeDrink();
    delete drink;
    cout << "==========================" << endl;
    drink = new Tea;
    drink->makeDrink();
    delete drink;
}

int main(){
    test1();
    //system("pause");
    return 0;
}