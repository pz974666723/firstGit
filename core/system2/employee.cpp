#include "employee.h"

Employee::Employee(int id, string name, int dId){
    this->m_Id = id; //职工编号
	m_Name = name; //职工姓名 this可写可不写，只要形参名和属性名不同
	this->m_DeptId = dId; //职工所在部门名称编号 
    //dId是因为使得保存文件的时候压缩体积，然后在程序中再转换成相应的中文
};

    //显示个人信息
void Employee::showInfo(){
    cout << "Id: " <<  m_Id
         << "\tname: " << m_Name
         << "\tjob: " << getDeptName() 
         << "\tduty: "<< "work hard!" << endl;

};
	//获取岗位名称
string Employee::getDeptName(){
    return string("employee");
};