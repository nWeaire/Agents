#pragma once
#include "Entity.h"
#include "Texture.h"
#include "Renderer2D.h"
#include "turret.h"
using namespace aie;
class Player :
	public Entity
{
public:
	//-------------------------------------
	// Default Constructor
	//-------------------------------------
	Player();
	
	//-------------------------------------
	// Default Destructor
	//-------------------------------------
	~Player();

	// Texture for ship
	aie::Texture*		m_shipTexture;
	
	// Pointer to its turret child
	turret* t1;

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

};

