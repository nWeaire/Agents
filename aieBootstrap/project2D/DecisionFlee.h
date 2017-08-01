#pragma once
#include "BaseDecision.h"
class DecisionFlee : public BaseDecision
{
public:
	DecisionFlee();
	virtual ~DecisionFlee();

	void MakeDecision(Agent* pAgent, float fDeltaTime);

};

