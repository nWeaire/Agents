#include "Seek.h"
#include "Input.h"
#include "Agent.h"

using namespace aie;

//-------------------------------------
// Default Constructor
// params:
//		fWeighting: weighting to determine 
//-------------------------------------
Seek::Seek(float fWeighting) : IBehaviour(fWeighting)
{
}

//-------------------------------------
// Default Destructor
//-------------------------------------
Seek::~Seek()
{
}

//-------------------------------------
// Calculates the force for agent to follow
// params:
//		pAgent: Agent to preform calculation on and apply velocity to
//		fDeltaTime: Float value to convert everything to seconds rather then frames
// returns:
//		Vector2: returns vector2 
//-------------------------------------
Vector2 Seek::calculate(Agent* pAgent, float fDeltaTime)
{
	int nMouseX;
	int nMouseY;
	Input::getInstance()->getMouseXY(&nMouseX, &nMouseY); // get mouse pos
	Vector2  v2MousePos(nMouseX, nMouseY);


	Vector2 v2Dir = v2MousePos - pAgent->getPos(); // Sets the direction to point at the mouse position

	v2Dir.normalise();


	return v2Dir * 100.0f * fDeltaTime; // returns the velocity
}