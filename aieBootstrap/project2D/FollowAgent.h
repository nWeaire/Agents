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
	//-------------------------------------
	// Default Constructor
	// Params:
	//		ppGrid: Grid the followAgent acts on
	//-------------------------------------
	FollowAgent(Grid* ppGrid);

	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	~FollowAgent();

	//-------------------------------------
	// Updates movement, scale and rotation of an object
	// Param:
	//		Deltatime: To make all values for movement relative to each other
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

