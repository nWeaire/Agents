#pragma once
#include "IBehaviour.h"

class flee : public IBehaviour
{
public:
	flee(float fWeighting);
	virtual ~flee();
	Vector2 calculate(Agent* pAgent, float fDeltaTime);
};

