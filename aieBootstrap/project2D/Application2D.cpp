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



//-------------------------------------
// Default Constructor
//-------------------------------------
Application2D::Application2D() 
{
}

//-------------------------------------
// Default Destructor
//-------------------------------------
Application2D::~Application2D() 
{
}

//-------------------------------------
// Calls functions required for startup
// returns:
//		bool: if start was successful or not
//
//-------------------------------------
bool Application2D::startup() 
{



	m_2dRenderer = new Renderer2D(); // Creates instance of renderer2D
	m_font = new Font("./font/consolas.ttf", 32); // Creates instance of Font

	m_pAI = new AI; // Creates instance of AI

	m_timer = 0; 

	

	m_ppGrid = new Grid; // Generates a new instance of a grid

	/*m_BehaviourTree = new AIBehaviourTree();*/ 
	m_pFollowAgent = new FollowAgent(m_ppGrid); // Creates instances of agent classes
	m_pPatrolAgent = new PatrolAgent(m_ppGrid);	// Creates instances of agent classes

	m_pDecisionAgent = new DecisionAgent; // Creates Agent that relys on decision tree

	
	m_cameraX = 0;
	m_cameraY = 0;
	return true;
}

void Application2D::shutdown() 
{

	// Deletes to avoid memory leaks
	delete m_ppGrid;
	delete m_font;
	delete m_2dRenderer;
	delete m_pFollowAgent;
	delete m_pPatrolAgent;
	//delete m_BehaviourTree;
}

//-------------------------------------
// Calculates a path for an agent
// params:
//		DeltaTime: Updates in seconds rather then frames
//-------------------------------------
void Application2D::update(float deltaTime) 
{
	m_timer += deltaTime;

	// input example
	Input* input = Input::getInstance();

	// Camera Controls
	//------------------------------------------
	if (input->isKeyDown(INPUT_KEY_UP))
		m_cameraY += 500.0f * deltaTime;

	if (input->isKeyDown(INPUT_KEY_DOWN))
		m_cameraY -= 500.0f * deltaTime;

	if (input->isKeyDown(INPUT_KEY_LEFT))
		m_cameraX -= 500.0f * deltaTime;

	if (input->isKeyDown(INPUT_KEY_RIGHT))
		m_cameraX += 500.0f * deltaTime;
	//------------------------------------------

	// Calling update function on all created instances
	m_pDecisionAgent->Update(deltaTime);
	m_pFollowAgent->Update(deltaTime);
	m_pPatrolAgent->Update(deltaTime);
	m_pAI->Update(deltaTime);

	// exit the application
	if (input->isKeyDown(INPUT_KEY_ESCAPE))
		quit();
}


//-------------------------------------
// Handles all rendering in game
// Calls other classes draw functions
//-------------------------------------
void Application2D::draw() 
{
	// wipe the screen to the background colour
	clearScreen();

	//m_2dRenderer->setCameraPos(-400, -100);
	
	m_2dRenderer->begin();
	
	// Sets initial camera position
	m_2dRenderer->setCameraPos(m_cameraX, m_cameraY);
	
	// Calls Draw on all created instance classes
	m_ppGrid->drawGrid(m_2dRenderer);
	m_pFollowAgent->Draw(m_2dRenderer);
	m_pPatrolAgent->Draw(m_2dRenderer);
	m_pAI->Draw(m_2dRenderer);
	m_pDecisionAgent->Draw(m_2dRenderer);
	

	m_2dRenderer->drawCircle(800.0f, 400.0f, 40);

	// done drawing sprites
	m_2dRenderer->end();
}