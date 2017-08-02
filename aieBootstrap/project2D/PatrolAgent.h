#pragma once
#include "Agent.h"
#include "StateMachine.h"
#include "Patrol.h"
#include "Idle.h"

class PatrolAgent : public Agent
{
public:
	PatrolAgent(Grid* ppGrid);
	~PatrolAgent();


	//-------------------------------------
	// Updates Global and Local tranforms of objects for movement, rotation and Scale
	//-------------------------------------
	void Update(float fDeltaTime);

	//-------------------------------------
	// Draws Objects
	// Params:
	//		m_2dRenderer for use renderering objects
	//-------------------------------------
	void Draw(Renderer2D* m_2dRenderer);

private:
	aie::Texture*		m_shipTexture;
	StateMachine*		m_StateMachine;
};

