#include "DecisionButtonPressed.h"
#include "Input.h"

using namespace aie;

//-------------------------------------
// Default Constructor
//-------------------------------------
DecisionButtonPressed::DecisionButtonPressed()
{
}

//-------------------------------------
// Default Destructor
//-------------------------------------
DecisionButtonPressed::~DecisionButtonPressed()
{
}

//-------------------------------------
// function which makes a decision with 2 possible answers
// params:
//		pAgent: Agent that makes the descision
//		fDeltaTime: deltaTime to control updates
//-------------------------------------
void DecisionButtonPressed::MakeDecision(Agent * pAgent, float fDeltaTime)
{
	if (Input::getInstance()->isKeyDown(INPUT_KEY_S))
	{
		m_pTrueDecision->MakeDecision(pAgent, fDeltaTime);
	}
	else
	{
		m_pFalseDecision->MakeDecision(pAgent, fDeltaTime);
	}


}
