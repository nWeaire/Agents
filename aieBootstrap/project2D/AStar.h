#pragma once
#include "aStarNode.h"
#include "aStarHeap.h"
#include "DynamicArray.h"
class AStar
{
public:
	AStar(int nMaxNodes);
	~AStar();

	bool CalculatePath(aStarNode* pStart, aStarNode* pEnd, DynamicArray<aStarNode*>* finishedPath);
	int CalcHeuristic(aStarNode* pCurrent, aStarNode* pEnd);

private:
	
	aStarHeap m_OpenList;
	bool* m_ClosedList;
	int maxNodes;
};

