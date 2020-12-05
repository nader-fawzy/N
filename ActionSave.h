
#pragma once
#include "Actions/Action.h"
class ActionSave :
	public Action
{
public:
	ActionSave(Registrar*);
	bool virtual Execute();
	virtual ~ActionSave();
};

