#pragma once
#include "Agent.h"

class StateMachine;

class AI : public Agent
{
public:

	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	AI();
	
	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	virtual ~AI();

	//-------------------------------------
	// function which updates every frame
	// params:
	//		fDeltaTime: deltaTime to control updates
	//-------------------------------------
	void Update(float fDeltaTime);

	//-------------------------------------
	// Draws AI
	// params:
	//		m_2dRenderer: handles the rendering of objects and sprites 
	//-------------------------------------
	void Draw(Renderer2D* m_2dRenderer);

private:
	// Pointer to a stateMachine to control AI's behaviours
	StateMachine* m_pStateMachine;
};

