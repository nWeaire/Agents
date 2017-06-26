#pragma once

#include "Renderer2D.h"

class GameObject;
using namespace aie;

class IBehaviour
{
public:
	IBehaviour();
	~IBehaviour();

	virtual void Update(GameObject* agent, float deltaTime);


};

