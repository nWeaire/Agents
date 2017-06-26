#pragma once
#include <memory.h>

template <typename T>
class DynamicArray
{
public:
	DynamicArray(int initialSize = 0)
	{
		int nCapacity = initialSize;
		if (nCapacity <= 0)
			nCapacity = 1;

		m_pData = new T[nCapacity];
		m_nCapacity = nCapacity;
		m_nUsed = 0;
	}
	~DynamicArray()
	{
		delete m_pData;
	}

	DynamicArray(const DynamicArray& other)
	{
		m_nCapacity = other.m_nCapacity;
		m_nUsed = other.m_nUsed;

		m_pData = new T[m_nCapacity];
		memcpy(m_pData, other.m_pData, sizeof(T) * m_nCapacity);
	}



	void pushBack(T value)
	{
		if (m_nUsed >= m_nCapacity)
			Resize();

		m_pData[m_nUsed] = value;
		++m_nUsed;
	}

	void pushFront(T value)
	{
		Insert(0, value);
	}

	void Insert(int index, T value)
	{
		if (index > m_nUsed)
			return;

		if (m_nUsed >= m_nCapacity)
			Resize();

		for (int i = m_nUsed - 1; i >= index; --i)
		{
			m_pData[i + 1] = m_pData[i];
		}
		m_pData[index] = value;
		++m_nUsed;

	}

	T popBack()
	{
		--m_nUsed;
		return m_pData[m_nUsed];
	}

	T Remove(int index)
	{
		// backup value we are removing from list
		T value = m_pData[index];

		// shuffle all other values across to fill removed space
		for (int i = index; i < m_nUsed; ++i)
		{
			m_pData[i] = m_pData[i + 1];
		}
		--m_nUsed;

		// return removed value
		return value;
	}

	T popFront()
	{
		return Remove(0);
	}

	void Clear()
	{
		m_nUsed = 0;
	}

	void Shrink()
	{
		int nCapacity = m_nUsed;
		if (nCapacity <= 0)
			nCapacity = 1;

		T* newData = new T[nCapacity];
		memcpy(newData, m_pData, sizeof(T) * nCapacity);
		delete m_pData;
		m_pData = newData;
		m_nCapacity = nCapacity;
	}

	T& operator[](const int index)
	{
		return m_pData[index];
	}

	int Size()
	{
		return m_nUsed;
	}

	int Capacity()
	{
		return m_nCapacity;
	}

	bool empty()
	{
		if (m_nUsed <= 0)
			return true;
		else
			return false;
	}

	T back()
	{
		return m_pData[m_nUsed - 1];
	}


private:

	DynamicArray& operator= (const DynamicArray& other) = default;
	DynamicArray(DynamicArray&& other) = default;
	DynamicArray& operator= (DynamicArray&& other) = default;

	void Resize()
	{
		// Create new array that is twice as big as original
		T* newData = new T[m_nCapacity * 2];

		// Cope old data across into new array
		memcpy(newData, m_pData, sizeof(T) * m_nCapacity);

		// Delete old array
		delete m_pData;

		//Make sure our pointers still work
		m_pData = newData;

		m_nCapacity = m_nCapacity * 2;
	};

	T* m_pData;
	int m_nCapacity;
	int m_nUsed;
};