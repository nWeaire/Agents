#include "Idle.h"
#include <iostream>
#include "StateMachine.h"
using namespace std;

//-------------------------------------
// Default Constructor
//-------------------------------------
Idle::Idle()
{
}

//-------------------------------------
// Default Destructor
//-------------------------------------
Idle::~Idle()
{
}

//----------------------------------------------------
// functions to run when entering state
// params:
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void Idle::OnEnter(StateMachine* pMachine)
{
	m_fTimer = 0;
	cout << "Entering idle state" << endl;
	pMachine->SetBackgroundRender(true);
}

//----------------------------------------------------
// Update state when update function is called in State Machine
// params:
//		DeltaTime: to make everything in seconds
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void Idle::OnUpdate(float fDeltaTime, StateMachine * pMachine, Agent* pAgent)
{
	m_fTimer += fDeltaTime;

	if (m_fTimer > 3)
	{
		pMachine->PopState();
	}

}

//----------------------------------------------------
// Draw functions to run when draw function is called from state machine
// params:
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void Idle::OnDraw(Renderer2D * m_2dRenderer)
{


}

//----------------------------------------------------
// functions to run when exiting state
// params:
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void Idle::OnExit(StateMachine * pMachine)
{
	pMachine->SetBackgroundRender(false);
	cout << "Exiting idle state" << endl;
}
