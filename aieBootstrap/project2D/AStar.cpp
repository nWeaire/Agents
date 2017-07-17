#include "AStar.h"



AStar::AStar()
{
}


AStar::~AStar()
{
}

bool AStar::CalculatePath(aStarNode* pStart, aStarNode* pEnd, Heap<aStarNode*>* finishedPath)
{
	// Reset everything incase of previous paths
	// Add Start node to open list
	
	
	// While there are still nodes in the open list
		// Get the node from the open list with the lowest F score, call it currentNode.
		// remove currentNode from the open list
		// add currentNode to the closed list

		// if currentNode is the end node, we are finished
			// Build path ( remember it is backwards so we need to fix that)
			// return that we found a valid path.
		
		// loop through all of currentNode's neighbours
			// Skip neighbours that are already in the closed list

			// if neighbour is already in open list...
				// Check if this current path is better then old path (lower F score).
					// Update G score.
					// Update F score.
					// Update Prev Node.
		
			
			//else (neighbour not in openList)
				// Calculate G score
				// Calculate H score
				// Calculate F score
				// Set Prev node pointer
				// add neighbour to open list

			
	// no path found if we got to here, so return false.
	return false;
}


