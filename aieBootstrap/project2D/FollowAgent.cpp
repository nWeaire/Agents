#include "FollowAgent.h"

int CalculateHeuristic(aStarNode* pCurrent, aStarNode* pEnd)
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

FollowAgent::FollowAgent(Grid* ppGrid)
{
	m_shipTexture = new Texture("./textures/tankRed.png");
	m_velocity = 300.0f; // sets speed for use in update()
	m_mass = 1; // sets a mass for the function

	Box.SetTR(Vector2(37.5, 37.5)); // Sets TR value for AABB
	Box.SetBL(Vector2(-37.5, -37.5)); // Sets BL value for AABB


	m_ppGrid = ppGrid;

	m_pAStar = new AStar(GRID_SIZE * GRID_SIZE);
	m_pAStar->setFucntion(&CalculateHeuristic);
	m_nNextNode = 0;
}


FollowAgent::~FollowAgent()
{
}

void FollowAgent::Update(float fDeltaTime)
{





}

void FollowAgent::Draw(Renderer2D * m_2dRenderer)
{
	for (int i = 0; i < m_path.Size(); ++i)
	{
		GridNode* pNode = (GridNode*)m_path[i];

		m_2dRenderer->setRenderColour(0x00FF00FF);
		m_2dRenderer->drawBox(pNode->m_v2Pos.x, pNode->m_v2Pos.y, NODE_SIZE / 2, NODE_SIZE / 2);
		m_2dRenderer->setRenderColour(0xFFFFFFFF);
	}

	// Render Player
	//m_2dRenderer->drawSpriteTransformed3x3(m_shipTexture, GlobalTransform);
	m_2dRenderer->setRenderColour(0x00FFFFFF);
	m_2dRenderer->drawBox(m_v2Pos.x, m_v2Pos.y, 30, 30);
	m_2dRenderer->setRenderColour(0xFFFFFFFF);

}
