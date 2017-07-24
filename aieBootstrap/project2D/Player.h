#pragma once
#include "Entity.h"
#include "Texture.h"
#include "Renderer2D.h"
#include "AStar.h"
#include "Grid.h"


using namespace aie;
class Player
{
public:
	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	Player(Grid* ppGrid);
	
	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	~Player();


	
	//-------------------------------------
	// Draws Objects texture
	// Param:
	//		Renderer2D*: To render the object on the screen
	//-------------------------------------
	void draw(Renderer2D* m_2dRenderer);

	//-------------------------------------
	// Updates movement, scale and rotation of an object
	// Param:
	//		Deltatime: To make all values for movement relative to each other
	//-------------------------------------
	void update(float deltaTime);




private:
	// Texture for ship
	aie::Texture*		m_shipTexture;

	Vector2 m_v2Pos;
	AStar* m_pAStar;

	Grid* m_ppGrid;


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


	DynamicArray<aStarNode*> m_path;


	int m_nNextNode;


};

