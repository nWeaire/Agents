#pragma once
#include "BehaviourNode.h"
#include "DynamicArray.h"


class Composite : public BehaviourNode
{
public:
	// DynamicArray of behaviourNodes for children nodes
	DynamicArray<BehaviourNode*> children;

};