#include "Application2D.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include "Defines.h"
#include "AStar.h"
#include "DynamicArray.h"
#include "aStarNode.h"
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

	
	m_timer = 0;

	m_pGrid = new Grid();

	


	return true;
}

void Application2D::shutdown() 
{
	delete m_pGrid;
	delete m_font;
	delete m_2dRenderer;
}

void Application2D::update(float deltaTime) 
{
	m_timer += deltaTime;

	// input example
	Input* input = Input::getInstance();


	// exit the application
	if (input->isKeyDown(INPUT_KEY_ESCAPE))
		quit();
}

void Application2D::draw() 
{
	// wipe the screen to the background colour
	clearScreen();

	m_2dRenderer->setCameraPos(-400, -100);

	m_2dRenderer->begin();


	
	// Draw
	m_pGrid->drawGrid(m_2dRenderer);


	// done drawing sprites
	m_2dRenderer->end();
}