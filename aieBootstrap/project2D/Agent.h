#pragma once
#include "Vector2.h"
#include "AStar.h"
#include "Grid.h"
#include "DynamicArray.h"
#include "Collider2D.h"
#include "Renderer2D.h"
class Agent {
public:
	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	Agent() {};

	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	virtual ~Agent() {};

	//-------------------------------------
	// Virtual function which updates every frame
	// params:
	//		fDeltaTime: deltaTime to control updates
	//-------------------------------------
	virtual void Update(float deltaTime) = 0;

	//-------------------------------------
	// Virtual function which makes a decision with 2 possible answers
	// params:
	//		m_2dRenderer: handles the rendering of objects and sprites 
	//-------------------------------------
	virtual void Draw(Renderer2D* m_2dRenderer) = 0;

	// Returns the vector2 position of the agent
	Vector2 getPos() { return m_v2Pos; };

	// Sets the new position of the vector
	void setPos(Vector2 v2Pos) { m_v2Pos = v2Pos; };

	Renderer2D* m_2dRenderer; // Renderer2D pointer


protected:

	Vector2 m_force; // Vector2 for force
	Vector2 m_acceleration;	// Vector2 for acceleration
	Vector2 m_2velocity; // Vector2 for Velocity
	Vector2 m_position; // Vector2 for position
	float m_mass; // Float for mass

	
	Vector2 m_v2Pos; // Vector2 for position
	AStar* m_pAStar; 

	Grid* m_ppGrid;

	DynamicArray<aStarNode*> m_path;

	Collider2D Box; // Collider2D for the object

	int m_nNextNode;
};
