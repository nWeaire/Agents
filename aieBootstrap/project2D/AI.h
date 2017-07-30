#pragma once
#include "Agent.h"

class StateMachine;

class AI : public Agent
{
public:
	AI();
	virtual ~AI();

	void Update(float fDeltaTime);
	void Draw(Renderer2D* Render);

private:
	StateMachine* m_pStateMachine;
};

