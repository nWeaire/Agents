#pragma once
#include "LinkedList.h"

template <typename T>
class Queue
{
public:
	Queue()
	{
		
	}

	~Queue()
	{
	}

	void Push(T value)
	{
		q.PushBack(value);
	}

	T Top()
	{
		return q.First();
	}

	int size()
	{
		return q.Size();
	}

	bool empty()
	{
		return q.empty();
	}


	T pop()
	{
		return q.popFront();
	}

	void clear()
	{
		q.clear();
	}


	void printList()
	{
		q.printList();
	}


	LinkedList<T> q;
};