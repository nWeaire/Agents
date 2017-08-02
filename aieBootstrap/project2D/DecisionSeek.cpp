#include "DecisionSeek.h"
#include "Seek.h"

//-------------------------------------
// Default Constructor
//-------------------------------------
DecisionSeek::DecisionSeek()
{
	m_pBehaviourList.pushBack(new Seek(0.75f));

}

//-------------------------------------
// Default Destructor
//-------------------------------------
DecisionSeek::~DecisionSeek()
{
	for (unsigned int i = 0; i < m_pBehaviourList.Size(); ++i)
	{
		delete m_pBehaviourList[i];
	}

}

//-------------------------------------
// function which makes a decision with 2 possible answers
// params:
//		pAgent: Agent that makes the descision
//		fDeltaTime: deltaTime to control updates
//-------------------------------------
void DecisionSeek::MakeDecision(Agent* pAgent, float fDeltaTime)
{
	Vector2 v2force;
	for (unsigned int i = 0; i < m_pBehaviourList.Size(); ++i)
	{
		Vector2 currentForce = m_pBehaviourList[i]->calculate(pAgent, fDeltaTime);
		currentForce = currentForce * m_pBehaviourList[i]->m_fWeighting;

		v2force = v2force + currentForce;

		float fMag = v2force.magnitude();
		if (fMag > 10.0f)
		{
			v2force.normalise();
			v2force = v2force * 10.0f;
			break;
		}
	}
	pAgent->setPos(pAgent->getPos() + v2force);

}
