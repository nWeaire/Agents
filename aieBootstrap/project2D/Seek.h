#pragma once
#include "IBehaviour.h"

class seek : public IBehaviour
{
public:
	seek(float fWeighting);
	virtual ~seek();

	Vector2 calculate(Agent* pAgent, float fDeltaTime);
};

