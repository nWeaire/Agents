#pragma once
#include "BaseDecision.h"
#include "DynamicArray.h"
#include "IBehaviour.h"
#include "Flee.h"
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
	// function which makes a decision with 2 possible answers
	// params:
	//		pAgent: Agent that makes the descision
	//		fDeltaTime: deltaTime to control updates
	//-------------------------------------
	void MakeDecision(Agent* pAgent, float fDeltaTime);


private:
	DynamicArray<IBehaviour*> m_pBehaviourList;
};

