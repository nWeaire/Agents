#pragma once
#include "BaseDecision.h"
#include "DynamicArray.h"
#include "IBehaviour.h"
class DecisionSeek : public BaseDecision
{
public:

	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	DecisionSeek();
	
	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	virtual ~DecisionSeek();

	//-------------------------------------
	// Virtual function which makes a decision with 2 possible answers
	// params:
	//		pAgent: Agent that makes the descision
	//		fDeltaTime: deltaTime to control updates
	//-------------------------------------
	void MakeDecision(Agent* pAgent, float fDeltaTime);

private:
	// Dynamic array of behaviours to call action from
	DynamicArray<IBehaviour*> m_pBehaviourList;

};

