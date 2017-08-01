#pragma once
#include "GridNode.h"
#include "Application.h"
#include "Renderer2D.h"
#include "Audio.h"
#include "Grid.h"
#include "FollowAgent.h"
#include "AI.h"
#include "DecisionAgent.h"



struct GridNode;
class Player;
class AIBehaviourTree;

class Application2D : public aie::Application {
public:

	Application2D();
	virtual ~Application2D();

	virtual bool startup();
	virtual void shutdown();

	virtual void update(float deltaTime);
	virtual void draw();

protected:

	aie::Renderer2D*	m_2dRenderer;
	aie::Texture*		m_shipTexture;
	aie::Font*			m_font;
	Grid*				m_ppGrid;
	Player*				m_pPlayer;
	FollowAgent*		m_pFollowAgent;
	AI*					m_pAI;
	AIBehaviourTree*	m_BehaviourTree;
	DecisionAgent*		m_pDecisionAgent;


	float m_cameraX, m_cameraY;
	float m_timer;



};