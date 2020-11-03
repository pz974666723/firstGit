#include<iostream>
#include<string>
using namespace std;

// class Java{
// public:
//     void header(){
//         cout << "h1, h2, h3" << endl;
//     }
//     void footer(){
//         cout << "f1, f2, f3" << endl;
//     }
//     void left(){
//         cout << "l1, l2, l3" << endl;
//     }
//     void content(){
//         cout << "java:c1, c2, c3" << endl;
//     }
// };

// class Python{
// public:
//     void header(){
//         cout << "h1, h2, h3" << endl;
//     }
//     void footer(){
//         cout << "f1, f2, f3" << endl;
//     }
//     void left(){
//         cout << "l1, l2, l3" << endl;
//     }
//     void content(){
//         cout << "Python:c1, c2, c3" << endl;
//     }
// };

//继承实现
class BasePage{
public:
    void header(){
        cout << "h1, h2, h3" << endl;
    }
    void footer(){
        cout << "f1, f2, f3" << endl;
    }
    void left(){
        cout << "l1, l2, l3" << endl;
    }
};

class Java : public BasePage{
public:
    void content(){
        cout << "java:c1, c2, c3" << endl;
    }
};

class Python : public BasePage{
public:
    void content(){
        cout << "Python:c1, c2, c3" << endl;
    }
};

void test1(){
    Java J1;
    J1.header();
    J1.footer();
    J1.left();
    J1.content();
    cout << "------------" << endl;
    Python P1;
    P1.header();
    P1.footer();
    P1.left();
    P1.content();
}

int main(){
    test1();
    //system("pause");
    return 0;
}