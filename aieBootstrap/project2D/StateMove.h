#pragma once
#include "State.h"
#include "Agent.h"
class StateMove : public State
{
public:
	StateMove();
	~StateMove();
	//on enter
	void OnEnter(StateMachine* pMachine);

	//on update
	void OnUpdate(float fDeltaTime, StateMachine* pMachine, Agent* pAgent);

	// draw
	void OnDraw(Renderer2D* m_2dRenderer);

	//on exit
	void OnExit(StateMachine* pMachine);

};

