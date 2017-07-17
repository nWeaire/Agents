#include "AStar.h"



AStar::AStar()
{
}


AStar::~AStar()
{
}

bool AStar::CalculatePath(aStarNode* pStart, aStarNode* pEnd, vector<aStarNode*>* finishedPath)
{



	
}

void AStar::SortOpenList()
{
	for (size_t i = 0; i < m_OpenList.size(); ++i)
	{
		for (size_t j = 0; j < m_OpenList.size() - 1; ++j)
		{
			if (m_OpenList[j]->m_nFScore > m_OpenList[j + 1]->m_nFScore)
			{
				aStarNode* swap = m_OpenList[j];
				m_OpenList[j] = m_OpenList[j + 1];
				m_OpenList[j + 1] = swap;

			}
		}
	}




}
