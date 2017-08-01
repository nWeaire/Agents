#pragma once


enum EBehaviourResult
{
	
	EBEHAVIOUR_FAILURE,
	EBEHAVIOUR_SUCCESS

};


class BehaviourNode
{
public:

	//-------------------------------------
	// Virtual function which executes result
	//-------------------------------------
	virtual EBehaviourResult Execute() = 0;


};