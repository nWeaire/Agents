#include "DecisionTreeClass.h"
#include "DecisionSeek.h"
#include "DecisionButtonPressed.h"
#include "DecisionFlee.h"

//-------------------------------------
// Default Constructor
//-------------------------------------
DecisionTreeClass::DecisionTreeClass()
{
	m_pRoot = new DecisionButtonPressed(); // Creates root question

	m_pRoot->m_pTrueDecision = new DecisionSeek(); // creates true decision
	m_pRoot->m_pFalseDecision = new DecisionFlee(); // creates false decison



}

//-------------------------------------
// Default Destructor
//-------------------------------------
DecisionTreeClass::~DecisionTreeClass()
{
	delete m_pRoot->m_pTrueDecision;
	delete m_pRoot->m_pFalseDecision;
	delete m_pRoot;


}

//-------------------------------------
// function which updates the decision tree
// params:
//		pAgent: Agent that makes the descision
//		fDeltaTime: deltaTime to control updates
//-------------------------------------
void DecisionTreeClass::Update(Agent* pAgent, float fDeltaTime)
{
	m_pRoot->MakeDecision(pAgent, fDeltaTime);


}
