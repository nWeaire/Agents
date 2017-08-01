#include "DecisionTreeClass.h"
#include "DecisionSeek.h"
#include "DecisionButtonPressed.h"
#include "DecisionFlee.h"

DecisionTreeClass::DecisionTreeClass()
{
	m_pRoot = new DecisionButtonPressed();

	m_pRoot->m_pTrueDecision = new DecisionSeek();
	m_pRoot->m_pFalseDecision = new DecisionFlee();



}


DecisionTreeClass::~DecisionTreeClass()
{
	delete m_pRoot->m_pTrueDecision;
	delete m_pRoot->m_pFalseDecision;
	delete m_pRoot;


}

void DecisionTreeClass::Update(Agent* pAgent, float fDeltaTime)
{
	m_pRoot->MakeDecision(pAgent, fDeltaTime);


}
