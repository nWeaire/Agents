#pragma once
#include "aStarNode.h"
#include <vector>
using namespace std;


class AStar
{
public:
	AStar();
	~AStar();

	bool CalculatePath(aStarNode* pStart, aStarNode* pEnd, vector<aStarNode*>* finishedPath);


private:
	void SortOpenList(); // Make a heap

	vector<aStarNode*> m_OpenList;
	vector<bool> m_ClosedList;

};

