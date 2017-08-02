#include "PatrolAgent.h"



PatrolAgent::PatrolAgent(Grid* ppGrid)
{
	m_ppGrid = ppGrid;

	/*m_pAStar = new AStar(GRID_SIZE * GRID_SIZE);
	m_pAStar->setFucntion(&CalculateHeuristic);
	m_nNextNode = 0;*/

	m_StateMachine = new StateMachine();
	m_StateMachine->AddState(0, new Patrol(m_ppGrid));
	m_StateMachine->AddState(1, new Idle);
	m_StateMachine->PushState(0);

}


PatrolAgent::~PatrolAgent()
{
}

void PatrolAgent::Update(float fDeltaTime)
{
	m_StateMachine->OnUpdate(fDeltaTime, this, 90, 55);

}

void PatrolAgent::Draw(Renderer2D * m_2dRenderer)
{
	m_StateMachine->Draw(m_2dRenderer);

}
