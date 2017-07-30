#pragma once
#include "Composite.h"


// AND
class Sequence : public Composite
{
public:
	EBehaviourResult Execute()
	{
		for (unsigned int i = 0; i < children.Size(); ++i)
		{
			if (children[i]->Execute() == EBEHAVIOUR_FAILURE)
			{
				return EBEHAVIOUR_FAILURE;
			}
		}
		return EBEHAVIOUR_SUCCESS;
	}
};
