#include "Player.h"
#include "Input.h"
#include "Vector2.h"
#include "CollisionManager.h"
#include <iostream>
#include "Defines.h"
#include "DynamicArray.h"

//-------------------------------------
// Calculates the heuristic value of the aStarPath
// Param:
//		pCurrent: Node at the beginning of the aStarPath
//		pEnd: Node at the end of the aStarPath
// Returns:
//		int: Returns the heuristic of the aStarPath
//-------------------------------------
int CalcHeuristic(aStarNode* pCurrent, aStarNode* pEnd)
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
Player::Player(Grid* ppGrid)
{
	m_shipTexture = new Texture("./textures/tankRed.png");
	speed = 300.0f; // sets speed for use in update()
	mass = 1; // sets a mass for the function

	Box.SetTR(Vector2(37.5, 37.5)); // Sets TR value for AABB
	Box.SetBL(Vector2(-37.5, -37.5)); // Sets BL value for AABB
	

	m_ppGrid = ppGrid;

	m_pAStar = new AStar(GRID_SIZE * GRID_SIZE);
	m_pAStar->setFucntion(&CalcHeuristic);
	m_nNextNode = 0;

}

//-------------------------------------
// Default Destructor
//-------------------------------------
Player::~Player()
{
	
	delete m_shipTexture; // deletes ship texture

	delete m_pAStar;

}

//-------------------------------------
// Draws Objects texture
// Param:
//		Renderer2D*: To render the object on the screen
//-------------------------------------
void Player::draw(Renderer2D* m_2dRenderer)
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

//-------------------------------------
// Updates movement, scale and rotation of an object
// Param:
//		Deltatime: To make all values for movement relative to each other
//-------------------------------------
void Player::update(float deltaTime)
{
	m_path.Clear();
	m_pAStar->CalculatePath(m_ppGrid->getNode(1), m_ppGrid->getNode(98), &m_path);

	//m_path[m_nNextNode]

	if (m_nNextNode >= m_path.Size())
		m_nNextNode = 0;

	Vector2 dest = ((GridNode*)m_path[m_nNextNode])->m_v2Pos;
	Vector2 dir = dest - m_v2Pos;
	dir.normalise();
	m_v2Pos = m_v2Pos + dir * 250.0f * deltaTime;

	// Check distance and update destination when we get close to node

	Vector2 dist = dest - m_v2Pos;
	float fDist = dist.magnitude();
	if (fDist < 10)
	{
		++m_nNextNode;
	}

	//float drag = 1.0f; // Creates a drag value
	//Vector2 pos; // creates a Vector to set the pos
	//float rot = 0;
	//rotSpeed = 3;
	//Vector2 direction(0, 0); 
	//Vector2 acceleration; // creates Vector for acceleration
	//Vector2 forceSum; // Creates vector for overall force

	////Using input, change vectors position
	//Input* input = Input::getInstance();

	//if (input->isKeyDown(INPUT_KEY_W))
	//{
	//	direction = Vector2(0, 1); // movement
	//}
	//if (input->isKeyDown(INPUT_KEY_S))
	//{
	//	direction = Vector2(0, -0.75); // Movement
	//}
	//if (input->isKeyDown(INPUT_KEY_A))
	//{
	//	rot += rotSpeed * deltaTime; // Rotation
	//}
	//if (input->isKeyDown(INPUT_KEY_D))
	//{
	//	rot -= rotSpeed * deltaTime; // Rotation
	//}

	//forceSum = direction * speed;
	//acceleration = forceSum / mass;
	//Vector2 dampening = -(velocity * drag);
	//velocity += (acceleration + dampening) * deltaTime;
	//pos += velocity * deltaTime;

	////Create a local matrix for position
	//Matrix3 PlayerPos; // Creates Matrix3 to store player position
	//Matrix3 PlayerRot; // Creates Matrix3 to store player rotation
	////Copy position from vector to matrix using SetPosition()
	//PlayerPos.setPosition(pos); // Sets players Position
	//PlayerRot.setRotateZ(rot);	// Sets players Rotation

	////Combine position matrix with LocalTransform
	//LocalTransform = LocalTransform * PlayerRot; // Updates local transform
	//LocalTransform = LocalTransform * PlayerPos; // Updates local transform

	//UpdateTransforms(); // Updates global Transform
	//Entity* Collision = CollisionManager::GetInstance()->testCollision(this); // Resolves Collison
	//if (Collision)
	//{
	//	velocity = -velocity; // Creates bounce effect by reversing the velocity
	//}
}


