#pragma once
#include "Agent.h"
#include "DecisionTreeClass.h"

class DecisionAgent : public Agent
{
public:
	DecisionAgent();
	~DecisionAgent();

	void Update(float deltaTime);
	void Draw(Renderer2D* Render);


private:

	DecisionTreeClass*		m_pDecisionTree;


};

