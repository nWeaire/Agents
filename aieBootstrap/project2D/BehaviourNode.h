#pragma once


enum EBehaviourResult
{
	
	EBEHAVIOUR_FAILURE,
	EBEHAVIOUR_SUCCESS

};


class BehaviourNode
{
public:
	virtual EBehaviourResult Execute() = 0;


};