#pragma once
#include "worker.h"
class boss :
    public worker
{
public:
	//构造函数
	boss(int id, string name, int dId);

	//显示个人信息
	virtual void showInfo();

	//获取岗位名称
	virtual string getDeptName();
};

