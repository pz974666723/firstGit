#include "manager.h"

Manager::Manager(int id, string name, int dId){
    this->m_Id = id; 
	m_Name = name; 
	this->m_DeptId = dId;  

};

    //显示个人信息
void Manager::showInfo(){
    cout << "Id: " <<  m_Id
         << "\tname: " << m_Name
         << "\tjob: " << getDeptName() 
         << "\tduty: "<< "rule employee" << endl;

};
	//获取岗位名称
string Manager::getDeptName(){
    return string("manager");
};