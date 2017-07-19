#pragma once

#include "DynamicArray.h"

struct aStarNode;

struct aStarEdge
{
	aStarNode* m_pEndNode;
	int m_nCost;


};

struct aStarNode
{
public:

	aStarNode(int nIndex)
	{
		m_bBlocked = false;
		m_pPrev = nullptr;
		m_nGScore = 0;
		m_nHScore = 0;
		m_nFScore = 0;
		m_nIndex = nIndex;
		
	}



	aStarNode* m_pPrev;


	int m_nGScore;
	int m_nHScore;
	int m_nFScore;
	
	int m_nIndex;

	bool m_bBlocked;

	DynamicArray<aStarEdge*> m_AdjacentList;


	virtual ~aStarNode()
	{
		for (int i = 0; i < m_AdjacentList.Size(); ++i)
		{
			delete m_AdjacentList[i];
		}
	}
};

