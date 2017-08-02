#include "StateMove.h"
#include "Seek.h"
#include "Flee.h"
#include "Agent.h"

//-------------------------------------
// Default Constructor
//-------------------------------------
StateMove::StateMove()
{
	m_pBehaviourList.pushBack(new Seek(0.75f));
	m_pBehaviourList.pushBack(new flee(0.20f));
}

//-------------------------------------
// Default Destructor
//-------------------------------------
StateMove::~StateMove()
{
	for (unsigned int i = 0; i < m_pBehaviourList.Size(); ++i)
	{
		delete m_pBehaviourList[i];
	}
}

//----------------------------------------------------
// functions to run when entering state
// params:
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void StateMove::OnEnter(StateMachine* pMachine)
{

}

//----------------------------------------------------
// Update state when update function is called in State Machine
// params:
//		DeltaTime: to make everything in seconds
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void StateMove::OnUpdate(float fDeltaTime, StateMachine* pMachine, Agent* pAgent)

{
	Vector2 v2force;
	for (unsigned int i = 0; i < m_pBehaviourList.Size(); ++i)
	{
		Vector2 currentForce = m_pBehaviourList[i]->calculate(pAgent, fDeltaTime);
		currentForce = currentForce * m_pBehaviourList[i]->m_fWeighting;

		v2force = v2force + currentForce;

		float fMag = v2force.magnitude();
		if (fMag > 10.0f)
		{
			v2force.normalise();
			v2force = v2force * 10.0f;
			break;
		}
	}
	pAgent->setPos(pAgent->getPos() + v2force);
}

//----------------------------------------------------
// Draw functions to run when draw function is called from state machine
// params:
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void StateMove::OnDraw(Renderer2D* m_2dRenderer)
{

}

//----------------------------------------------------
// functions to run when exiting state
// params:
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void StateMove::OnExit(StateMachine* pMachine)
{

}