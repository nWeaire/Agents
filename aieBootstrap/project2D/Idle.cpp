#include "Idle.h"
#include <iostream>
using namespace std;


Idle::Idle()
{
}


Idle::~Idle()
{
}

void Idle::OnEnter(StateMachine * pMachine)
{
	m_fTimer = 0;
	cout << "Entering idle state" << endl;
}

void Idle::OnUpdate(float fDeltaTime, StateMachine * pMachine)
{
	m_fTimer += fDeltaTime;

	if (m_fTimer > 3)
	{

	}

}

void Idle::OnDraw(Renderer2D * m_2dRenderer)
{


}

void Idle::OnExit(StateMachine * pMachine)
{

	cout << "Exiting idle state" << endl;
}
