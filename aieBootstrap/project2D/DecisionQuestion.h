#pragma once


#include "BaseDecision.h"

class DecisionQuestion : public BaseDecision
{
public:

	virtual void MakeDecision(Agent* pAgent, float fDeltaTime) = 0;
	
public:
	BaseDecision* m_pTrueDecision;
	BaseDecision* m_pFalseDecision;

};