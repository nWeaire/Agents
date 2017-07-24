#pragma once
#include "DynamicArray.h"
#include "Matrix3.h"
#include "Collider2D.h"
#include "Renderer2D.h"
#include "AStar.h"
#include "Grid.h"


using namespace aie;
//-------------------------------------
// Base class which all objects will Inherit from
//-------------------------------------
class Entity
{
public:
	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	Entity() {};
	
	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	virtual ~Entity() = 0;

	//-------------------------------------
	// Updates Global and Local tranforms of objects for movement, rotation and Scale
	//-------------------------------------
	virtual void Update(float fDeltaTime) = 0;

	//-------------------------------------
	// Sets the parent for matrix hierarchy
	// Param:
	//		Entity*: The object you want to set the parent as
	//-------------------------------------
	//virtual void SetParent(Entity* parent) = 0;
	//
	//-------------------------------------
	// Adds a Child to a dynamic array 
	// Param:
	//		Entity*: The object you want to set the child as
	//-------------------------------------
	//virtual void AddChild(Entity* child) = 0;

	//-------------------------------------
	// Adds a Child to a dynamic array 
	// Returns:
	//		Collider2D: Returns the values for the AABB 
	//-------------------------------------
	//virtual Collider2D getCollider() = 0;
	//
	

	//-------------------------------------
	// Sets active state for object
	// param:
	//		bActive: true or false for active state
	//-------------------------------------
	//virtual void SetActive(bool bActive) = 0;
	//
	//-------------------------------------
	// checks whether active or not and returns bool
	// Returns:
	//		returns a bool of active state
	//-------------------------------------
	//virtual bool GetActive() = 0;

	//-------------------------------------
	// Draws Objects
	// Params:
	//		m_2dRenderer for use renderering objects
	//-------------------------------------
	virtual void Draw(Renderer2D* m_2dRenderer) = 0;



protected:
	// Float for speed value
	float speed;
	// Vector2 for Velocity
	Vector2 velocity;
	// Float for Rotation speed
	float rotSpeed;
	// Float for mass to be set in contructor
	float mass;
	// Collider2D for value of the AABB
	Collider2D Box;

	bool m_bActive;


	// Dynamic array for Children to be set in the AddChild function
	DynamicArray<Entity*> Children;


	// Entity* for parents
	Entity* Parent;

	// Local transform for update functions for Movement, scale and rotation
	Matrix3 LocalTransform;
	// Global transform for update functions for Movement, scale and rotation
	Matrix3 GlobalTransform;
};

