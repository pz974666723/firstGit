#include<iostream>
#include<string>

#include "workerManager.h"
#include "worker.h"
#include "employee.h"
#include "manager.h"
#include "boss.h"

using namespace std;

int main(){
 
    int choice = 0;//存储用户选择
    //实例化管理者对象
    WorkerManager wm;
    //调用展示菜单
    while (true)
    {
        wm.show_Menu();
        cin >> choice;
        switch(choice){
            case 0:
                wm.myexit();
                break;
            case 1: 
                wm.Add_Emp();
                break;
            case 2: 
                wm.show_Emp();
                break;
            case 3: 
                wm.del_Emp();
                break;
            case 4: 
                wm.mod_Emp();
                break;
            case 5: 
                wm.find_Emp();
                break;
            case 6: 
                wm.sort_Emp();
                break;
            case 7: 
                wm.clean_Emp();
                break;
            default:
                system("cls");
                break;
        }
    }
    
    


    //system("pause");
    return 0;
}