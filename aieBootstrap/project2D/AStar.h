#pragma once
#include "aStarNode.h"
#include "Heap.h"
using namespace std;


class AStar
{
public:
	AStar();
	~AStar();

	bool CalculatePath(aStarNode* pStart, aStarNode* pEnd, Heap<aStarNode*>* finishedPath);


private:
	
	Heap<aStarNode*> m_OpenList;
	Heap<bool> m_ClosedList;

};

