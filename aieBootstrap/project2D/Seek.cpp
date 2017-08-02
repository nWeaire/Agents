#include "Seek.h"
#include "Input.h"
#include "Agent.h"

using namespace aie;

Seek::Seek(float fWeighting) : IBehaviour(fWeighting)
{
}


Seek::~Seek()
{
}

Vector2 Seek::calculate(Agent* pAgent, float fDeltaTime)
{
	int nMouseX;
	int nMouseY;
	Input::getInstance()->getMouseXY(&nMouseX, &nMouseY);
	Vector2  v2MousePos(nMouseX, nMouseY);


	Vector2 v2Dir = v2MousePos - pAgent->getPos();

	v2Dir.normalise();


	return v2Dir * 100.0f * fDeltaTime;
}