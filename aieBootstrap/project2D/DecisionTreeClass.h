#pragma once

#include "DecisionQuestion.h"
#include "Agent.h"
class DecisionTreeClass
{
public:
	DecisionTreeClass();
	~DecisionTreeClass();

	void Update(Agent* pAgent, float fDeltaTime);

private:

	DecisionQuestion* m_pRoot;

};

