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
	//�ڵ���ǰ�洢״̬
	_cmd->Execute();
}
