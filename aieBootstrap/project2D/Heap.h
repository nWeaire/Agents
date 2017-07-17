#pragma once
class Heap
{
public:
	Heap();
	~Heap();

	//Functions for looking at/removing the values at the top of the heap
	int Peek();
	void Pop();

	//Clear all values from the heap
	void Clear();

	//Push/Remove values from the heap
	void Push(int value);
	void Remove(int value);

	//Get information about the heap itself
	unsigned int GetSize();
	unsigned int GetMaxSize();

	//Set the minimum amount of space needed for this heap
	void SetMaxSize(int minSize);
private:

	int* m_pValueArray;
	unsigned int m_uiArraySize;
	unsigned int m_uiCurrentNumberOfValues;
};
