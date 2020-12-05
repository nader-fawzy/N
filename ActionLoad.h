#pragma once

#include "Actions/Action.h"
class ActionLoad :
	public Action
{
public:
	ActionLoad(Registrar*);
	bool virtual Execute();
	virtual ~ActionLoad();
};


