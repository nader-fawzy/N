#pragma once

#include "Actions/Action.h"
class ActionRedo :
	public Action
{
public:
	ActionRedo(Registrar*);
	bool virtual Execute();
	virtual ~ActionRedo();
};

