#include "FollowAgent.h"

FollowAgent::FollowAgent(Grid* ppGrid)
{
	m_shipTexture = new Texture("./textures/tankRed.png");
	m_velocity = 300.0f; // sets speed for use in update()
	m_mass = 1; // sets a mass for the function

	Box.SetTR(Vector2(37.5, 37.5)); // Sets TR value for AABB
	Box.SetBL(Vector2(-37.5, -37.5)); // Sets BL value for AABB


	m_ppGrid = ppGrid;

	/*m_pAStar = new AStar(GRID_SIZE * GRID_SIZE);
	m_pAStar->setFucntion(&CalculateHeuristic);
	m_nNextNode = 0;*/

	m_StateMachine = new StateMachine();
	m_StateMachine->AddState(0, new Patrol(m_ppGrid));
	m_StateMachine->AddState(1, new Idle);
	m_StateMachine->PushState(0);


}


FollowAgent::~FollowAgent()
{

}

void FollowAgent::Update(float fDeltaTime)
{
	m_StateMachine->Update(fDeltaTime);


}

void FollowAgent::Draw(Renderer2D * m_2dRenderer)
{
	m_StateMachine->Draw(m_2dRenderer);

}