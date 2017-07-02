#pragma once
#include "DynamicArray.h"
#include "State.h"


class StateMachine
{
public:
	StateMachine();
	~StateMachine();

	void Update(float fDeltaTime);
	//void Draw(Renderer2D* m_2dRenderer);
	void SetState(int nStateIndex);
	void AddState(int nStateIndex, State* pState);

private:
	int m_nCurrentState;
	DynamicArray<State*> m_StateList;
};

