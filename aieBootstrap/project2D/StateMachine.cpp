#include "StateMachine.h"



StateMachine::StateMachine()
{
	m_nCurrentState = -1;
}


StateMachine::~StateMachine()
{
}

void StateMachine::Update(float fDeltaTime)
{
	if (m_StateList.Size() <= 0)
		return;

	m_StateList[m_nCurrentState]->OnUpdate(fDeltaTime);
}

//void StateMachine::Draw(Renderer2D* m_2dRenderer)
//{
//	if (m_StateList.Size() <= 0)
//		return;
//
//	m_StateList[m_nCurrentState]->OnDraw(m_2dRenderer);
//}

void StateMachine::SetState(int nStateIndex)
{
	if (m_nCurrentState >= 0)
		m_StateList[m_nCurrentState]->OnExit();

	m_nCurrentState = nStateIndex;

	m_StateList[m_nCurrentState]->OnEnter();

}

void StateMachine::AddState(int nStateIndex, State * pState)
{
	m_StateList.Insert(nStateIndex, pState);
}
