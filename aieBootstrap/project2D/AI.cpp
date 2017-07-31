#include "AI.h"
#include "stateMachine.h"
#include "State.h"
#include "StateMove.h"

AI::AI()
{
	m_pStateMachine = new StateMachine();


	m_pStateMachine->AddState(0, new StateMove());

	m_pStateMachine->PushState(0);
}


AI::~AI()
{
}

void AI::Update(float fDeltaTime)
{
	m_pStateMachine->Update(fDeltaTime, this);
}
void AI::Draw(Renderer2D* Render)
{
	Render->setRenderColour(0xAA00FFFF);
	Render->drawCircle(m_v2Pos.x, m_v2Pos.y, 20.0f);
	Render->setRenderColour(0xAA00FFFF);

}
