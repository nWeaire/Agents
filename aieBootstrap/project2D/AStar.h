#pragma once
#include "aStarHeap.h"
#include "DynamicArray.h"

struct aStarNode;

typedef int(*CalcHeur)(aStarNode*, aStarNode*);

class AStar
{
public:
	AStar(int nMaxNodes);
	~AStar();

	bool CalculatePath(aStarNode* pStart, aStarNode* pEnd, DynamicArray<aStarNode*>* finishedPath);
	
	void setFucntion(CalcHeur func);
	int callFunction(aStarNode* pStart, aStarNode* pEnd);
	

protected:
	
	aStarHeap m_OpenList;
	bool* m_ClosedList;
	int maxNodes;

	CalcHeur myHeuristic = nullptr;
};

