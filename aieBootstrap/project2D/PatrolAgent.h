#pragma once
#include "Agent.h"
#include "Texture.h"
#include "StateMachine.h"
#include "Idle.h"
#include "Follow.h"

using namespace aie;

class PatrolAgent :	public Agent
{
public:
	//-------------------------------------
	// Default Constructor
	// Params:
	//		ppGrid: Grid the followAgent acts on
	//-------------------------------------
	PatrolAgent(Grid* ppGrid);

	//-------------------------------------
	// Default Destructor
	//-------------------------------------
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

