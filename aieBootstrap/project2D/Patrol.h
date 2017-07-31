#pragma once
#include "StateMachine.h"
#include "Grid.h"
#include "AStar.h"
#include "Defines.h"
#include "State.h"
#include "aStarHeap.h"


class Patrol : public State
{
public:
	Patrol(Grid* ppGrid);
	~Patrol();

	//----------------------------------------------------
	// functions to run when entering state
	// params:
	//		takes in the state machine so it can call from its functions
	//----------------------------------------------------
	void OnEnter(StateMachine* pMachine);

	//----------------------------------------------------
	// Update state when update function is called in State Machine
	// params:
	//		DeltaTime: to make everything in seconds
	//		takes in the state machine so it can call from its functions
	//----------------------------------------------------
	void OnUpdate(float fDeltaTime, StateMachine* pMachine, Agent* pAgent);

	//----------------------------------------------------
	// Draw functions to run when draw function is called from state machine
	// params:
	//		takes in the state machine so it can call from its functions
	//----------------------------------------------------
	void OnDraw(Renderer2D* m_2dRenderer);

	//----------------------------------------------------
	// functions to run when exiting state
	// params:
	//		takes in the state machine so it can call from its functions
	//----------------------------------------------------
	void OnExit(StateMachine* pMachine);

private:

	float m_fTimer;


	Vector2 m_v2Pos;
	AStar* m_pAStar;

	Grid* m_ppGrid;

	DynamicArray<aStarNode*> m_path;
	bool m_bGoingBack;
	int m_nNextNode;
};

