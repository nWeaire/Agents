#pragma once
#include "BaseDecision.h"
class DecisionSeek : public BaseDecision
{
public:
	DecisionSeek();
	virtual ~DecisionSeek();

	void MakeDecision(Agent* pAgent, float fDeltaTime);


};

