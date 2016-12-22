#include "ReadCommand.h"


ReadCommand::ReadCommand(string* str) :_str(str)
{
	cout << "construct ReadCommand" << endl;
}


ReadCommand::~ReadCommand()
{
	cout << "delete ReadCommand" << endl;

}

void ReadCommand::Execute()
{
	cout << *_str << endl;
}