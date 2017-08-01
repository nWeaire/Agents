#include "Application2D.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include "Defines.h"
#include "AStar.h"
#include "DynamicArray.h"
#include "aStarNode.h"
#include "DecisionTreeClass.h"
#include "Player.h"
#include "AIBehaviourTree.h"
using namespace aie;




Application2D::Application2D() 
{
}

Application2D::~Application2D() 
{
}

bool Application2D::startup() 
{



	m_2dRenderer = new Renderer2D();
	m_font = new Font("./font/consolas.ttf", 32);

	m_pAI = new AI;

	m_timer = 0;

	

	m_ppGrid = new Grid;

	/*m_BehaviourTree = new AIBehaviourTree();*/
	m_pFollowAgent = new FollowAgent(m_ppGrid);


	m_pDecisionAgent = new DecisionAgent;

	//Decision Tree 

	
	m_cameraX = 0;
	m_cameraY = 0;
	return true;
}

void Application2D::shutdown() 
{
	delete m_ppGrid;
	delete m_font;
	delete m_2dRenderer;
	delete m_pFollowAgent;
	//delete m_BehaviourTree;
}

void Application2D::update(float deltaTime) 
{
	m_timer += deltaTime;

	// input example
	Input* input = Input::getInstance();

	if (input->isKeyDown(INPUT_KEY_UP))
		m_cameraY += 500.0f * deltaTime;

	if (input->isKeyDown(INPUT_KEY_DOWN))
		m_cameraY -= 500.0f * deltaTime;

	if (input->isKeyDown(INPUT_KEY_LEFT))
		m_cameraX -= 500.0f * deltaTime;

	if (input->isKeyDown(INPUT_KEY_RIGHT))
		m_cameraX += 500.0f * deltaTime;


	m_pDecisionAgent->Update(deltaTime);
	//m_BehaviourTree->Update(deltaTime);
	m_pFollowAgent->Update(deltaTime);
	m_pAI->Update(deltaTime);

	// exit the application
	if (input->isKeyDown(INPUT_KEY_ESCAPE))
		quit();
}

void Application2D::draw() 
{
	// wipe the screen to the background colour
	clearScreen();

	//m_2dRenderer->setCameraPos(-400, -100);
	
	m_2dRenderer->begin();
	
	
	m_2dRenderer->setCameraPos(m_cameraX, m_cameraY);
	// Draw
	m_ppGrid->drawGrid(m_2dRenderer);
	m_pFollowAgent->Draw(m_2dRenderer);
	m_pAI->Draw(m_2dRenderer);
	m_pDecisionAgent->Draw(m_2dRenderer);


	m_2dRenderer->drawCircle(800.0f, 400.0f, 40);

	// done drawing sprites
	m_2dRenderer->end();
}