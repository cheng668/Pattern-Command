#include "MacroCommand.h"
#include <iterator>

MacroCommand::MacroCommand()
{
	cout << "construct MacroCommand" << endl;
}


MacroCommand::~MacroCommand()
{
	cout << "delete MacroCommand" << endl;

}

void MacroCommand::Execute()
{
	for (list<Command*>::iterator i = _cmds.begin(); i != _cmds.end();i++)
	{
		(*i)->Execute();
	}
}

void MacroCommand::add(Command* cmd)
{
	_cmds.push_back(cmd);
}

void MacroCommand::remove(Command* cmd)
{
	_cmds.remove(cmd);
}