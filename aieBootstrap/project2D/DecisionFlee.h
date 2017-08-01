#pragma once
#include "BaseDecision.h"
class DecisionFlee : public BaseDecision
{
public:

	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	DecisionFlee();

	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	virtual ~DecisionFlee();


	//-------------------------------------
	// Virtual function which makes a decision with 2 possible answers
	// params:
	//		pAgent: Agent that makes the descision
	//		fDeltaTime: deltaTime to control updates
	//-------------------------------------
	void MakeDecision(Agent* pAgent, float fDeltaTime);

};

