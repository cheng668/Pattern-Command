#pragma once
#include "Command.h"
#include <string>
class ReadCommand :
	public Command
{
public:
	ReadCommand(string*);
	virtual ~ReadCommand();
	virtual void Execute() override;
private:
	string* _str;
};

