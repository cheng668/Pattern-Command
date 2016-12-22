#include "MenuItem.h"


MenuItem::MenuItem(Command* cmd) :_cmd(cmd)
{
	cout << "construct MenuItem" << endl;
}


MenuItem::~MenuItem()
{
	cout << "delete MenuItem" << endl;

}

void MenuItem::clicked(){
	//在调用前存储状态
	_cmd->Execute();
}
