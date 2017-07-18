#pragma once

#include <math.h>
#include "DynamicArray.h"
#include "aStarNode.h"
class aStarHeap
{
public:
	aStarHeap()
	{
	}

	~aStarHeap()
	{

	}

	void Push(aStarNode* data)
	{
		// Add data to end of array
		m_Data.pushBack(data);

		// Loop through and swap parent if data is smaller
		int current = m_Data.Size() - 1;
		while (true)
		{
			if (current == 0)
				break;

			int parent = GetParentIndex(current);

			if (m_Data[current]->m_nFScore < m_Data[parent]->m_nFScore)
			{
				aStarNode* swap = m_Data[current];
				m_Data[current] = m_Data[parent];
				m_Data[parent] = swap;

				current = parent;
			}
			else
				break;
		}
	}

	aStarNode* Pop()
	{
		aStarNode* result = m_Data[0];
		// replace first element with last element
		int last = m_Data.Size() - 1;
		m_Data[0] = m_Data[last];


		// swap first element with smaller child if child is smaller
		int current = 0;

		while (true)
		{
			int child0 = getChildIndex(current, 1);
			if (child0 > last)
				break;


			int child1 = getChildIndex(current, 2);
			int smallerChild = child0;
			if (child1 <= last && m_Data[child1]->m_nFScore < m_Data[smallerChild]->m_nFScore)
				smallerChild = child1;

			if (m_Data[smallerChild]->m_nFScore < m_Data[current]->m_nFScore)
			{
				aStarNode* swap = m_Data[current];
				m_Data[current] = m_Data[smallerChild];
				m_Data[smallerChild] = swap;

				current = smallerChild;
			}
			else
				break;
		}
		//repeat
		m_Data.popBack();
		return result;
	}

	void Clear()
	{
		m_Data.Clear();
	}

	int GetSize()
	{
		return (int)m_Data.Size();
	}

	int GetParentIndex(int childIndex)
	{
		return (childIndex - 1) / 2;
	}

	int getChildIndex(int parentIndex, int whichChild)
	{
		return (2 * parentIndex) + whichChild;
	}

	bool Contains(aStarNode* pData)
	{
		for (int i = 0; i < m_Data.Size(); ++i)
		{
			if (m_Data[i] == pData)
				return true;
		}
		return false;
	}


private:

	DynamicArray<aStarNode*> m_Data;

};
