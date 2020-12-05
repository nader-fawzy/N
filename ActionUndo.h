#pragma once

#include "Actions/Action.h"
class ActionUndo :
	public Action
{
public:
	ActionUndo(Registrar*);
	bool virtual Execute();
	virtual ~ActionUndo();
};


