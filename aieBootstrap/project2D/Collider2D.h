#pragma once
#include "Vector2.h"
class Collider2D
{
public:
	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	Collider2D();

	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	~Collider2D();

	//---------------------------------
	// Set functions for AABB collision
	// Param:
	//		Vector2: Containing location of top right of AABB
	//---------------------------------
	void SetTR(Vector2 TR);

	//---------------------------------
	// Set functions for AABB collision
	// Param:
	//		Vector2: Containing location of Bottom right of AABB
	//---------------------------------
	void SetBL(Vector2 BL);

	//----------------------------------
	// Gets the location of the AABB
	// Returns:
	//		Vector2: contating x and y values of the Top right of AABB
	//----------------------------------
	Vector2 getTR();

	//----------------------------------
	// Gets the location of the AABB
	// Returns:
	//		Vector2: contating x and y values of the Bottom left of AABB
	//----------------------------------
	Vector2 getBL();

private:

	// Variables for location of AABB
	Vector2 BL;
	Vector2 TR;
};

