#pragma once
#include "Command.h"
#include <list>
class MacroCommand :
	public Command
{
public:
	MacroCommand();
	virtual ~MacroCommand();

	virtual void Execute() override;
	virtual void add(Command*);
	virtual void remove(Command*);
private:
	list<Command*> _cmds;
};

