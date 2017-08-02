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
	m_2dRenderer->setRenderColour(0xAA00FFFF);
	m_2dRenderer->drawCircle(m_v2Pos.x, m_v2Pos.y, 20.0f);
	m_2dRenderer->setRenderColour(0xAA00FFFF);



}
