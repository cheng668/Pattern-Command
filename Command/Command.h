#pragma once
#include <iostream>
using namespace std;
class Command
{
public:
	virtual ~Command()
	{
		cout << "delete Command" << endl;

	}

	virtual void Execute() = 0;
	virtual void add(Command*){}
	virtual void remove(Command*){}
protected:
	Command()
	{
		cout << "construct Command" << endl;

	}

};

