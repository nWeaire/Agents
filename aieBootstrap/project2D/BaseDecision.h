#pragma once
#include "Agent.h"

class BaseDecision
{
public:
	//-------------------------------------
	// Virtual function which makes a decision with 2 possible answers
	// params:
	//		pAgent: Agent that makes the descision
	//		fDeltaTime: deltaTime to control updates
	//-------------------------------------
	virtual void MakeDecision(Agent* pAgent, float fDeltaTime) = 0;




};