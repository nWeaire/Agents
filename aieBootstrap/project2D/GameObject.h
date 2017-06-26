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

	virtual void Update(float deltaTime)
	{
		for (int i = 0; i < m_behaviours.Size(); i++)
			m_behaviours[i]->Update(this, deltaTime);

	}
	virtual void Draw(Renderer2D m_renderer2D)
	{

	}


protected:
	DynamicArray<IBehaviour*> m_behaviours;

	Vector2 m_force;
	Vector2 m_acceleration;
	Vector2 m_velocity;
	Vector2 m_position;


};

