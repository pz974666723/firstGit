#include "boss.h"

Boss::Boss(int id, string name, int dId){
    this->m_Id = id; 
	m_Name = name; 
	this->m_DeptId = dId;  

};

    //显示个人信息
void Boss::showInfo(){
    cout << "Id: " <<  m_Id
         << "\tname: " << m_Name
         << "\tjob: " << getDeptName() 
         << "\tduty: "<< "rule the company" << endl;

};
	//获取岗位名称
string Boss::getDeptName(){
    return string("boss");
};