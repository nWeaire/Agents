#pragma once
#include "Composite.h"


// OR
class Selector : public Composite
{
public:
	EBehaviourResult Execute()
	{
		for (unsigned int i = 0; i < children.Size(); ++i)
		{
			if (children[i]->Execute() == EBEHAVIOUR_SUCCESS)
			{
				return EBEHAVIOUR_SUCCESS;
			}
		}
		return EBEHAVIOUR_FAILURE;
	}
};

