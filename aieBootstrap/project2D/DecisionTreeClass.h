#pragma once

#include "DecisionQuestion.h"
#include "Agent.h"
class DecisionTreeClass
{
public:
	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	DecisionTreeClass();

	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	~DecisionTreeClass();

	//-------------------------------------
	// Virtual function which updates the decision tree
	// params:
	//		pAgent: Agent that makes the descision
	//		fDeltaTime: deltaTime to control updates
	//-------------------------------------
	void Update(Agent* pAgent, float fDeltaTime);

private:

	// Root Decision question
	DecisionQuestion* m_pRoot;

};

