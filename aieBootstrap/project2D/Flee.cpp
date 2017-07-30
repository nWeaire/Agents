#include "flee.h"
#include "Agent.h"



flee::flee(float fWeighting) : IBehaviour(fWeighting)
{
}


flee::~flee()
{
}

Vector2 flee::calculate(Agent* pAgent, float fDeltaTime)
{
	
	Vector2  v2fleePos(200.0f, 200.0f);


	Vector2 v2Dir =pAgent->getPos() - v2fleePos;

	float fMag = v2Dir.magnitude();
	v2Dir.normalise();

	float DistScale = (fMag / 200);
	if (DistScale > 1.0f)
	{
		DistScale = 1.0f;
	}

	m_fWeighting = 1.0f - DistScale;

	return v2Dir * 100.0f * fDeltaTime;
}