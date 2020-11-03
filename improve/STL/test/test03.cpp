/*
案例描述
    公司今天招聘了10个员工（ABCDEFGHIJ），10名员工进入公司之后，需要指派员工在那个部门工作
    员工信息有: 姓名 工资组成；部门分为：策划、美术、研发
    随机给10名员工分配部门和工资
    通过multimap进行信息的插入 key(部门编号) value(员工)
    分部门显示员工信息
实现步骤
    创建10名员工，放到vector中
    遍历vector容器，取出每个员工，进行随机分组
    分组后，将员工部门编号作为key，具体员工作为value，放入到multimap容器中
    分部门显示员工信息
*/
#include<iostream>
using namespace std;
#include <vector>
#include <string>
#include <map>
#include <ctime>

#define CEHUA  0
#define MEISHU 1
#define YANFA  2

class Worker{
public:
    string m_Name;
	int m_Salary;
};

void createWorker(vector<Worker>&v){
    string nameSeed = "ABCDEFGHIJ";
    for (int i = 0; i < 10; i++){
        Worker w;
        w.m_Name = "Worker";
        w.m_Name += nameSeed[i];
        w.m_Salary = rand() % 10000 + 10000;//10000 ~ 19999
        v.push_back(w);
    }
}

void setGroup(vector<Worker> &v, multimap<int, Worker> &mm){
    for (vector<Worker>::iterator it = v.begin(); it != v.end(); it++){
        //产生随机部门编号
        int ID = rand() % 3;//0 1 2
        mm.insert(make_pair(ID, *it));//记住map中传入的是pair对组
    }
}

void showWorker(multimap<int, Worker> &mm){
    cout << "CEHUA:" << endl;
    multimap<int, Worker>::iterator pos = mm.find(CEHUA);
    int count = mm.count(CEHUA);//统计具体人员信息
    int index = 0;
    for (; pos != mm.end() && index < count; pos++ , index++){//循环终止条件也可改为pos != mm.find(MEISHU);
        cout << "name = " << pos->second.m_Name << "  salary = " << pos->second.m_Salary << endl;
    }

    cout << "----------------------" << endl;
	cout << "MEISHU: " << endl;
    pos = mm.find(MEISHU);
    count = mm.count(MEISHU);//统计具体人员信息
    index = 0;
    for (; pos != mm.find(YANFA); pos++){//循环终止条件也可改为pos != mm.find(YANFA);
        cout << "name = " << pos->second.m_Name << "  salary = " << pos->second.m_Salary << endl;
    }

    cout << "----------------------" << endl;
	cout << "YANFA: " << endl;
    pos = mm.find(YANFA);
    count = mm.count(YANFA);//统计具体人员信息
    index = 0;
    for (; pos != mm.end() && index < count; pos++ , index++){//循环终止条件也可改为pos != mm.end;
        cout << "name = " << pos->second.m_Name << "  salary = " << pos->second.m_Salary << endl;
    }

}

int main(){

    //srand((unsigned int)time(NULL));//随机种子

    vector<Worker> v;
    createWorker(v);//通过引用
    multimap<int, Worker> mm;//因为key为int类型所以不需要重载排序
    setGroup(v, mm);//通过引用
    showWorker(mm);//通过引用
    return 0;
}