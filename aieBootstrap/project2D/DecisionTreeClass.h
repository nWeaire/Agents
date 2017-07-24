#pragma once

#include "DecisionQuestion.h"

class DecisionTreeClass
{
public:
	DecisionTreeClass();
	~DecisionTreeClass();

	void Update(Entity* pEntity, float fDeltaTime);

private:

	DecisionQuestion* m_pRoot;

};

