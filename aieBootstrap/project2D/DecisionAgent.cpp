#include "DecisionAgent.h"



DecisionAgent::DecisionAgent()
{

	m_pDecisionTree = new DecisionTreeClass();

}


DecisionAgent::~DecisionAgent()
{

	delete m_pDecisionTree;
}

void DecisionAgent::Update(float deltaTime)
{
	m_pDecisionTree->Update(this, deltaTime);

}

void DecisionAgent::Draw(Renderer2D * m_2dRenderer)
{
	m_2dRenderer->drawCircle(100, 100, 20);


}
