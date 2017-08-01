#pragma once
#include "IBehaviour.h"

class flee : public IBehaviour
{
public:
	//-------------------------------------
	// Default Constructor
	// params:
	//		fWeighting: weighting to determine 
	//-------------------------------------
	flee(float fWeighting);

	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	virtual ~flee();
	
	//-------------------------------------
	// Calculates the force for agent to follow
	// params:
	//		pAgent: Agent to preform calculation on and apply velocity to
	//		fDeltaTime: Float value to convert everything to seconds rather then frames
	// returns:
	//		Vector2: returns vector2 
	//-------------------------------------
	Vector2 calculate(Agent* pAgent, float fDeltaTime);
};

