#pragma once
#include "GridNode.h"
#include "Application.h"
#include "Renderer2D.h"
#include "Audio.h"
#include "Grid.h"
#include "FollowAgent.h"
#include "AI.h"
#include "DecisionAgent.h"
#include "PatrolAgent.h"

//Forward declaring multiple classes
struct GridNode; 
class Player;
class AIBehaviourTree;

class Application2D : public aie::Application {
public:

	Application2D();
	virtual ~Application2D();

	// Function called on program startup
	virtual bool startup();

	// Function called when program is shutting down
	virtual void shutdown();


	// Update function to be called every frame
	virtual void update(float deltaTime);

	// Function to handle renderering of all object in the level
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer; // default aie renderer
	aie::Texture*		m_shipTexture; // Texture of ship for players
	aie::Font*			m_font; // default aie font
	Grid*				m_ppGrid; // Pointer to aStar grid
	Player*				m_pPlayer; // Pointer to player class
	FollowAgent*		m_pFollowAgent; // Pointer to FollowAgent Ai class
	PatrolAgent*		m_pPatrolAgent; // Pointer to PatrolAgent Ai class
	AI*					m_pAI; // Pointer to AI class
	AIBehaviourTree*	m_BehaviourTree; // Pointer to behaviourTree
	DecisionAgent*		m_pDecisionAgent;  // pointer to decision tree


	float m_cameraX, m_cameraY;
	float m_timer;



};