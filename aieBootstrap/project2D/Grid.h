#pragma once
#include "Renderer2D.h"
#include "aStarNode.h"
#include "GridNode.h"
#include "Defines.h"
#include "AStar.h"


using namespace aie;



class Grid
{
public:
	

	void drawGrid(Renderer2D* m_2dRenderer);
	
	GridNode* getNode(int index);


	Grid();
	~Grid();
private:
	
	GridNode** m_ppGrid;
	AStar* m_pAStar;





};

