#pragma once
#include "Vector2.h"
#include "IBehaviour.h"
#include "DynamicArray.h"
using namespace aie;

class GameObject
{
public:
	GameObject() {};
	~GameObject() {};

	virtual void Update(float deltaTime) = 0;

	virtual void Draw(Renderer2D m_renderer2D) = 0;
	

protected:
	DynamicArray<IBehaviour*> m_behaviours;

	Vector2 m_force;
	Vector2 m_acceleration;
	Vector2 m_velocity;
	Vector2 m_position;

	float deltaTime;
};

