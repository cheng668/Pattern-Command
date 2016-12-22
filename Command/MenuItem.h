#pragma once
#include "Command.h"
/*这个类是Invoker类，
可以调用Command和实现撤销功能的存储状态功能*/
class MenuItem
{
public:
	MenuItem(Command*);
	~MenuItem();

	void clicked();
private:
	Command* _cmd;
};

