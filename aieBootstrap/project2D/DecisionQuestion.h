#pragma once


#include "BaseDecision.h"

class DecisionQuestion : public BaseDecision
{
public:

	//-------------------------------------
	// Virtual function which makes a decision with 2 possible answers
	// params:
	//		pAgent: Agent that makes the descision
	//		fDeltaTime: deltaTime to control updates
	//-------------------------------------
	virtual void MakeDecision(Agent* pAgent, float fDeltaTime) = 0;
	
public:
	
	// BaseDecision for true result
	BaseDecision* m_pTrueDecision;
	
	// BaseDecision for false result
	BaseDecision* m_pFalseDecision;

};