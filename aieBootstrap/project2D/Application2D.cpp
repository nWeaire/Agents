#include "Application2D.h"
#include "Texture.h"
#include "Font.h"
#include "Input.h"
#include "Defines.h"



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


	m_ppGrid = new GridNode*[GRID_SIZE * GRID_SIZE];

	for (int x = 0; x < GRID_SIZE; ++x)
	{
		for (int y = 0; y < GRID_SIZE; ++y)
		{
			int index = (y * GRID_SIZE) + x;

			Vector2 pos(x * NODE_SIZE, y * NODE_SIZE);
			m_ppGrid[index] = new GridNode(pos, x, y);

		}
	}

	for (int x = 0; x < GRID_SIZE; ++x)
	{
		for (int y = 0; y < GRID_SIZE; ++y)
		{
			int index = (y * GRID_SIZE) + x;

			GridNode* currentNode = m_ppGrid[index];
			// -------------
			// |   | 3 |   |
			// -------------
			// | 0 | C | 2 |
			// -------------
			// |   | 1 |   |
			// -------------
			// Adjacent Nodes
			for (int a = 0; a < 4; ++a)
			{
				int localX = x;
				int localY = y;

				if (a % 2 == 0)
				{
					localX += a - 1;
				}
				else
				{
					localY += a - 2;
				}

				if (localX < 0 || localX >= GRID_SIZE)
					continue;

				if (localY < 0 || localY >= GRID_SIZE)
					continue;


				int localIndex = (localY * GRID_SIZE) + localX;
				GridNode* adjNode = m_ppGrid[localIndex];

				aStarEdge* pEdge = new aStarEdge();
				pEdge->m_pEndNode = adjNode;
				pEdge->m_nCost = 10;

				currentNode->m_AdjacentList.pushBack(pEdge);
			}

			// Diagonal Nodes
			for (int d = 0; d < 4; ++d)
			{

			}


		}
	}






	return true;
}

void Application2D::shutdown() 
{
	


	for (int i = 0; i < GRID_SIZE * GRID_SIZE; ++i)
	{
		delete m_ppGrid[i];
	}
	delete[] m_ppGrid;



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
	for (int i = 0; i < GRID_SIZE * GRID_SIZE; ++i)
	{
		float x = m_ppGrid[i]->m_v2Pos.x;
		float y = m_ppGrid[i]->m_v2Pos.y;
		m_2dRenderer->drawBox(m_ppGrid[i]->m_v2Pos.x, m_ppGrid[i]->m_v2Pos.y, NODE_SIZE - 5, NODE_SIZE - 5);


		for (int a = 0; a < m_ppGrid[i]->m_AdjacentList.Size(); ++a)
		{
			GridNode* otherNode = ((GridNode*)m_ppGrid[i]->m_AdjacentList[a]->m_pEndNode);

			float otherX = otherNode->m_v2Pos.x;
			float otherY = otherNode->m_v2Pos.y;
			m_2dRenderer->setRenderColour(0xFF0000FF);
			m_2dRenderer->drawLine(x, y, otherX, otherY, 2.0f);
			m_2dRenderer->setRenderColour(0xFFFFFFFF);
		}
	}


	// done drawing sprites
	m_2dRenderer->end();
}