#include "Follow.h"

//-------------------------------------
// Calculates the heuristic value of the aStarPath
// Param:
//		pCurrent: Node at the beginning of the aStarPath
//		pEnd: Node at the end of the aStarPath
// Returns:
//		int: Returns the heuristic of the aStarPath
//-------------------------------------
int Heuristic(aStarNode* pCurrent, aStarNode* pEnd)
{
	int difX = ((GridNode*)pCurrent)->m_nIndexX - ((GridNode*)pEnd)->m_nIndexX;
	int difY = ((GridNode*)pCurrent)->m_nIndexY - ((GridNode*)pEnd)->m_nIndexY;
	difX = abs(difX);
	difY = abs(difY);

	if (difX > difY)
		return (14 * difY) + 10 * (difX - difY);
	else
		return (14 * difX) + 10 * (difY - difX);
	//return (abs(difX) + abs(difY)) * 10;

}

//-------------------------------------
// Default Constructor
//-------------------------------------
Follow::Follow(Grid* ppGrid)
{
	m_ppGrid = ppGrid;
	m_pAStar = new AStar(GRID_SIZE * GRID_SIZE);
	m_pAStar->setFucntion(&Heuristic);
	m_nNextNode = 0;
}

//-------------------------------------
// Default Destructor
//-------------------------------------
Follow::~Follow()
{

	delete m_pAStar;

}

//----------------------------------------------------
// functions to run when entering state
// params:
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void Follow::OnEnter(StateMachine * pMachine)
{
	m_fTimer = 0;
	

}

//----------------------------------------------------
// Update state when update function is called in State Machine
// params:
//		DeltaTime: to make everything in seconds
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void Follow::OnUpdate(float fDeltaTime, StateMachine * pMachine, Agent* pAgent)
{


	m_path.Clear();
	m_pAStar->CalculatePath(m_ppGrid->getNode(0), m_ppGrid->getNode(90), &m_path);

	//m_path[m_nNextNode]

	if (m_nNextNode >= m_path.Size() - 1)
	{
		m_bGoingBack = true;
	}
	if (m_nNextNode <= 0)
	{
		m_bGoingBack = false;
	}

	Vector2 dest = ((GridNode*)m_path[m_nNextNode])->m_v2Pos;
	Vector2 dir = dest - m_v2Pos;
	dir.normalise();
	m_v2Pos = m_v2Pos + dir * 150.0f * fDeltaTime;

	// Check distance and update destination when we get close to node

	Vector2 dist = dest - m_v2Pos;
	float fDist = dist.magnitude();
	if (fDist < 10)
	{
		if (m_bGoingBack)
			m_nNextNode--;
		else
			m_nNextNode++;
	}



	m_fTimer += fDeltaTime;
	if (m_fTimer > 3)
	{
		pMachine->PushState(1);
	}


}

//----------------------------------------------------
// Draw functions to run when draw function is called from state machine
// params:
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void Follow::OnDraw(Renderer2D * m_2dRenderer)
{
	//for (int i = 0; i < m_path.Size(); ++i)
	//{
	//	GridNode* pNode = (GridNode*)m_path[i];

	//	m_2dRenderer->setRenderColour(0x00FF00FF);
	//	m_2dRenderer->drawBox(pNode->m_v2Pos.x, pNode->m_v2Pos.y, NODE_SIZE / 2, NODE_SIZE / 2);
	//	m_2dRenderer->setRenderColour(0xFFFFFFFF);
	//}

	// Render Player
	//m_2dRenderer->drawSpriteTransformed3x3(m_shipTexture, GlobalTransform);
	m_2dRenderer->setRenderColour(0x00FFFFFF);
	m_2dRenderer->drawBox(m_v2Pos.x, m_v2Pos.y, 30, 30);
	m_2dRenderer->setRenderColour(0xFFFFFFFF);


}

//----------------------------------------------------
// functions to run when exiting state
// params:
//		takes in the state machine so it can call from its functions
//----------------------------------------------------
void Follow::OnExit(StateMachine * pMachine)
{

	pMachine->SetBackgroundRender(false);

}
