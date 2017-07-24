#pragma once
#include "Vector2.h"
#include "AStar.h"
#include "Grid.h"
#include "DynamicArray.h"
#include "Collider2D.h"

class Agent {
public:

	virtual void Update(float deltaTime) = 0;

protected:

	
	Vector2 m_force;
	Vector2 m_acceleration;
	float m_velocity;
	Vector2 m_position;
	float m_mass;

	

	Vector2 m_v2Pos;
	AStar* m_pAStar;

	Grid* m_ppGrid;

	DynamicArray<aStarNode*> m_path;

	Collider2D Box;

	int m_nNextNode;
};
