#include "employee.h"

//构造函数
employee::employee(int id,string name,int dId) {
	m_Id = id; 
	m_Name = name; 
	m_DeptId = dId;
}

//显示个人信息
void employee::showInfo() {
	cout << "职工编号:" << this->m_Id << "\t职工姓名:" << this->m_Name << "\t岗位:" 
		<< this->getDeptName() << "\t岗位职责：完成经理交给的任务" << endl;
}

//获取岗位名称
string employee::getDeptName() {
	return string("员工");
}