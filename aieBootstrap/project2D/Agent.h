#pragma once
#include "Vector2.h"
#include "AStar.h"
#include "Grid.h"
#include "DynamicArray.h"
#include "Collider2D.h"
#include "Renderer2D.h"
class Agent {
public:

	Agent() {};
	virtual ~Agent() {};

	virtual void Update(float deltaTime) = 0;
	virtual void Draw(Renderer2D* m_2dRenderer) = 0;
	Vector2 getPos() { return m_v2Pos; };
	void setPos(Vector2 v2Pos) { m_v2Pos = v2Pos; };



protected:

	
	Vector2 m_force;
	Vector2 m_acceleration;
	Vector2 m_2velocity;
	Vector2 m_position;
	float m_mass;

	Renderer2D* m_2dRenderer;

	Vector2 m_v2Pos;
	AStar* m_pAStar;

	Grid* m_ppGrid;

	DynamicArray<aStarNode*> m_path;

	Collider2D Box;

	int m_nNextNode;
};
