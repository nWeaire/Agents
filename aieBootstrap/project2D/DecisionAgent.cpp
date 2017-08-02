#include "DecisionAgent.h"


//-------------------------------------
// Default Constructor
//-------------------------------------
DecisionAgent::DecisionAgent()
{

	m_pDecisionTree = new DecisionTreeClass(); // creates an instance of Decision tree for Decision agent

}

//-------------------------------------
// Default Destructor
//-------------------------------------
DecisionAgent::~DecisionAgent()
{

	delete m_pDecisionTree;
}

//-------------------------------------
// function which updates every frame
// params:
//		fDeltaTime: deltaTime to control updates
//-------------------------------------
void DecisionAgent::Update(float deltaTime)
{
	m_pDecisionTree->Update(this, deltaTime);

}

//-------------------------------------
// Draws AI
// params:
//		m_2dRenderer: handles the rendering of objects and sprites 
//-------------------------------------
void DecisionAgent::Draw(Renderer2D * m_2dRenderer)
{
	m_2dRenderer->setRenderColour(0xAA00FFFF);
	m_2dRenderer->drawCircle(m_v2Pos.x, m_v2Pos.y, 20.0f);
	m_2dRenderer->setRenderColour(0xAA00FFFF);



}
