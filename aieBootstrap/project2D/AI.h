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
	// function which makes a decision with 2 possible answers
	// params:
	//		m_2dRenderer: handles the rendering of objects and sprites 
	//-------------------------------------
	void Draw(Renderer2D* Render);

private:
	// Pointer to a stateMachine to control AI's behaviours
	StateMachine* m_pStateMachine;
};

