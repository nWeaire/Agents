#pragma once
#include "Agent.h"
#include "DecisionTreeClass.h"

class DecisionAgent : public Agent
{
public:

	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	DecisionAgent();

	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	~DecisionAgent();

	//-------------------------------------
	// Virtual function which updates every frame
	// params:
	//		fDeltaTime: deltaTime to control updates
	//-------------------------------------
	void Update(float deltaTime);

	//-------------------------------------
	// Virtual function which makes a decision with 2 possible answers
	// params:
	//		m_2dRenderer: handles the rendering of objects and sprites 
	//-------------------------------------
	void Draw(Renderer2D* Render);


private:
	// Pointer to a decision tree class
	DecisionTreeClass*		m_pDecisionTree;


};

