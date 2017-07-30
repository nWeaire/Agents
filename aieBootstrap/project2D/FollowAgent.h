#pragma once
#include "Agent.h"
#include "Texture.h"
#include "StateMachine.h"
#include "Idle.h"
#include "Patrol.h"

using namespace aie;

class FollowAgent :	public Agent
{
public:
	FollowAgent(Grid* ppGrid);
	~FollowAgent();


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
