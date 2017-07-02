#pragma once
#include "Vector2.h"
#include "renderer2D.h"
using namespace aie;


class GameObject
{
public:
	GameObject();
	~GameObject();

	virtual void update(float fDeltaTime);
	virtual void draw(renderer2D m_renderer2d);


protected:
	Vector2 pos = Vector2(0, 0);
	float m_fVelocity;
	float m_fAcceleration;
	float m_fForce;

};

