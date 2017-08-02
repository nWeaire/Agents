#include "AI.h"
#include "stateMachine.h"
#include "State.h"
#include "StateMove.h"


//-------------------------------------
// Default Constructor
//-------------------------------------
AI::AI()
{
	m_pStateMachine = new StateMachine(); // Creates and instance of StateMachine for AI
	m_2dRenderer = nullptr; 

	m_pStateMachine->AddState(0, new StateMove()); // Adds StateMove to Ai's state machine

	m_pStateMachine->PushState(0); // Pushes StateMove onto the StateMachine
}

//-------------------------------------
// Default Destructor
//-------------------------------------
AI::~AI()
{
	delete m_pStateMachine;
	delete m_2dRenderer;
}

//-------------------------------------
// function which updates every frame
// params:
//		fDeltaTime: deltaTime to control updates
//-------------------------------------
void AI::Update(float fDeltaTime)
{
	m_pStateMachine->Update(fDeltaTime, this); // Calls StateMachines update
}

//-------------------------------------
// Draws AI
// params:
//		m_2dRenderer: handles the rendering of objects and sprites 
//-------------------------------------
void AI::Draw(Renderer2D* m_2dRenderer)
{
	this->m_2dRenderer = m_2dRenderer;
	m_2dRenderer->setRenderColour(0xFF0000FF);
	m_2dRenderer->drawCircle(m_v2Pos.x, m_v2Pos.y, 20.0f);
	m_2dRenderer->setRenderColour(0xAA00FFFF);

}
