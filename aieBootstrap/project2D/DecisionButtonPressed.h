#pragma once
#include "DecisionQuestion.h"


class DecisionButtonPressed : public DecisionQuestion
{

public:
	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	DecisionButtonPressed();

	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	virtual ~DecisionButtonPressed();

	//-------------------------------------
	// Virtual function which makes a decision with 2 possible answers
	// params:
	//		pAgent: Agent that makes the descision
	//		fDeltaTime: deltaTime to control updates
	//-------------------------------------
	void MakeDecision(Agent* pAgent, float fDeltaTime);
};

