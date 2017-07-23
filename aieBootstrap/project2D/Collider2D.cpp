#include "Collider2D.h"

//-------------------------------------
// Default Constructor
//-------------------------------------
Collider2D::Collider2D()
{
}

//-------------------------------------
// Default Destructor
//-------------------------------------
Collider2D::~Collider2D()
{
}

//---------------------------------
// Set functions for AABB collision
// Param:
//		Vector2: Containing location of top right of AABB
//---------------------------------
void Collider2D::SetTR(Vector2 TR)
{
	this->TR = TR;
}

//---------------------------------
// Set functions for AABB collision
// Param:
//		Vector2: Containing location of Bottom right of AABB
//---------------------------------
void Collider2D::SetBL(Vector2 BL)
{
	this->BL = BL;
}

//----------------------------------
// Gets the location of the AABB
// Returns:
//		Vector2: contating x and y values of the Top right of AABB
//----------------------------------
Vector2 Collider2D::getTR()
{
	return TR;
}

//----------------------------------
// Gets the location of the AABB
// Returns:
//		Vector2: contating x and y values of the Bottom left of AABB
//----------------------------------
Vector2 Collider2D::getBL()
{
	return BL;
}