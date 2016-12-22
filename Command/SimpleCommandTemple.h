#pragma once
#include "Command.h"

template<class Receiver>
class SimpleCommandTemple : public Command
{
public:
	typedef void (Receiver::*Action)();
	SimpleCommandTemple(Receiver *r, Action a) 
		:_receiver(r), _action(a){
		cout << "construct SimpleCommandTemple" << endl;
	}
	virtual void Execute();
private:
	Action _action;
	Receiver* _receiver;
};

template<class Receiver>
void SimpleCommandTemple<Receiver>::Execute()
{
	(_receiver->*_action)();
	cout << *_receiver << endl;
}