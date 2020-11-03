#include<iostream>
#include<string>
using namespace std;

//抽象CPU
class CPU{
public:
    virtual void calculate() = 0;
};

//抽象显卡
class VideoCard{
public:
    virtual void display() = 0;
};

//抽象内存
class Memory{
public:
    virtual void store() = 0;
};

//厂商
//Inter
class InterCPU: public CPU{
public:
    void calculate(){
        cout << "Inter CPU calculating" << endl;
    }
};
class InterVideoCard: public VideoCard{
public:
    void display(){
        cout << "Inter VideoCard displaying" << endl;
    }
};
class InterMemory: public  Memory{
public:
    void store(){
        cout << "Inter Memory storing" << endl;
    }
};
//Lenovo
class LenovoCPU: public CPU{
public:
    void calculate(){
        cout << "Lenovo CPU calculating" << endl;
    }
};
class LenovoVideoCard: public VideoCard{
public:
    void display(){
        cout << "Lenovo VideoCard displaying" << endl;
    }
};
class LenovoMemory: public  Memory{
public:
    void store(){
        cout << "Lenovo Memory storing" << endl;
    }
};

//电脑类
class Computer{
public:
    //构造函数中传入三个零件指针
    Computer(CPU* cpu, VideoCard* vc, Memory* mem){
        m_cpu = cpu;
        m_vc = vc;
        m_mem = mem;
    }
    //提供工作函数 调用每个零件接口
    void work(){
        m_cpu->calculate();
        m_vc->display();
        m_mem->store();
    }
private:
    //抽象类可以创建指针，无法创建对象
    CPU* m_cpu;
    VideoCard* m_vc;
    Memory* m_mem;
};


void test(){
    InterCPU ic;
    InterVideoCard ivc;
    InterMemory imem;
    LenovoCPU lc;
    LenovoVideoCard lvc;
    LenovoMemory lmem;
    //第一台
    cout << "================" << endl;
    cout << "1st computer:" << endl;
    Computer c1(&ic, &ivc, &imem);
    c1.work();
    //第二台
    cout << "================" << endl;
    cout << "2nd computer:" << endl;
    Computer c2(&lc, &lvc, &lmem);
    c2.work();
    //第三台
    cout << "================" << endl;
    cout << "3rd computer:" << endl;
    Computer c3(&ic, &lvc, &imem);
    c3.work();
}

int main(){
    test();
    //system("pause");
    return 0;
}