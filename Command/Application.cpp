#include "Command.h"
#include "MacroCommand.h"
#include "MenuItem.h"
#include "ReadCommand.h"
#include "SimpleCommandTemple.h"
int main()
{
	string str("cheng668");
	Command* ReadCom = new ReadCommand(&str);
	ReadCom->Execute();
	Command* MacroCom = new MacroCommand();
	MacroCom->add(ReadCom);
	MacroCom->Execute();
	MenuItem* menu = new MenuItem(ReadCom);
	menu->clicked();
	Command* simpleCom = new SimpleCommandTemple<string>(&str, &string::clear);
	simpleCom->Execute();

	delete ReadCom;
	delete MacroCom;
	delete simpleCom;
	delete menu;	

	_CrtDumpMemoryLeaks();
	system("pause");
	return 0;
}
/*
output:
construct Command
construct ReadCommand
cheng668
construct Command
construct MacroCommand
cheng668
construct MenuItem
cheng668
construct Command
construct SimpleCommandTemple

delete ReadCommand
delete Command
delete MacroCommand
delete Command
delete Command
delete MenuItem
*/