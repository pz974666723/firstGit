#pragma once//防止头文件重复包含
#include<iostream>
#include<string>
using namespace std;//使用标准命名空间
#include "worker.h"

//文件操作
#include<fstream>
//宏 定义文件名
#define FILENAME "empFile.txt"

class WorkerManager{
public:
    WorkerManager();
    //展示菜单
    void show_Menu();
    //退出功能
    void myexit();


    //*记录人数（带*表示成员属性，不带表示成员函数）
    int m_EmpNum;
    //*职工数组指针
    Worker** m_EmpArray;
    //添加职工
    void Add_Emp();
    //保存文件
    void SaveFile();
    //*文件是否为空
    bool m_FisEmpty;
    //统计文件中人数
    int get_FNum();
    //初始化员工
    void init_Emp();
    //显示职工
    void show_Emp();
    //判断职工存在(存在返回职工在数组中位置，不存在返回-1)
    int isExist(int d);
    //删除职工
    void del_Emp();
    //修改职工
    void mod_Emp();
    //查找职工
    void find_Emp();
    //排序
    void sort_Emp();
    //清空
    void clean_Emp();
    
    ~WorkerManager();
};