#pragma once
#include "Vector2.h"
class Agent;

class IBehaviour
{
public:
	//-------------------------------------
	// Constructor
	// params:
	//		fWeighting: weighted input to compete against other behaviours
	//
	//-------------------------------------
	IBehaviour(float fWeighting)
	{
		m_fWeighting = fWeighting;
	}

	//Update function
	virtual Vector2 calculate(Agent* pAgent, float fDeltaTime) = 0;
	float m_fWeighting;

};