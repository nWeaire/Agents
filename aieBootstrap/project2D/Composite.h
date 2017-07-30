#pragma once
#include "BehaviourNode.h"
#include "DynamicArray.h"


class Composite : public BehaviourNode
{
public:
	DynamicArray<BehaviourNode*> children;

};