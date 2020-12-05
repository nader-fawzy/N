#pragma once

#include "Actions/Action.h"
class ActionDrop :
	public Action
{
public:
	ActionDrop(Registrar*);
	bool virtual Execute();
	virtual ~ActionDrop();
};
