#include "flee.h"
#include "Agent.h"


//-------------------------------------
// Default Constructor
// params:
//		fWeighting: weighting to determine 
//-------------------------------------
flee::flee(float fWeighting) : IBehaviour(fWeighting)
{
}

//-------------------------------------
// Default Destructor
//-------------------------------------
flee::~flee()
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
Vector2 flee::calculate(Agent* pAgent, float fDeltaTime)
{
	
	Vector2  v2fleePos(800.0f, 400.0f); // position for agent to flee from


	Vector2 v2Dir =pAgent->getPos() - v2fleePos; // Gets direction from player to flee point

	float fMag = v2Dir.magnitude();
	v2Dir.normalise();

	float DistScale = (fMag / 200);
	if (DistScale > 1.0f)
	{
		DistScale = 1.0f;
	}

	m_fWeighting = 1.0f - DistScale;

	return v2Dir * 100.0f * fDeltaTime; // returns the velocity
}