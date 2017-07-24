#include "DecisionTreeClass.h"
#include "DecisionButtonPressed.h"
#include "DecisionNothingPressed.h"
#include "DecisionPrint.h"

DecisionTreeClass::DecisionTreeClass()
{
	m_pRoot = new DecisionButtonPressed();

	m_pRoot->m_pTrueDecision = new DecisionPrint();
	m_pRoot->m_pFalseDecision = new DecisionNothingPressed();



}


DecisionTreeClass::~DecisionTreeClass()
{
	delete m_pRoot->m_pTrueDecision;
	delete m_pRoot->m_pFalseDecision;
	delete m_pRoot;


}

void DecisionTreeClass::Update(Entity * pEntity, float fDeltaTime)
{
	m_pRoot->MakeDecision(pEntity, fDeltaTime);


}
