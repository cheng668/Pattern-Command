#pragma once
#include "Command.h"
/*�������Invoker�࣬
���Ե���Command��ʵ�ֳ������ܵĴ洢״̬����*/
class MenuItem
{
public:
	MenuItem(Command*);
	~MenuItem();

	void clicked();
private:
	Command* _cmd;
};

