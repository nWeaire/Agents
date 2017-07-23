#include "Player.h"
#include "Input.h"
#include "Vector2.h"
#include "CollisionManager.h"
#include <iostream>

//-------------------------------------
// Default Constructor
//-------------------------------------
Player::Player()
{
	m_shipTexture = new Texture("./textures/tankRed.png");
	speed = 300.0f; // sets speed for use in update()
	mass = 1; // sets a mass for the function

	Box.SetTR(Vector2(37.5, 37.5)); // Sets TR value for AABB
	Box.SetBL(Vector2(-37.5, -37.5)); // Sets BL value for AABB
	t1 = new turret; // Creates Turret
	t1->SetParent(this); // Sets Turrets parent as Player
	this->AddChild(t1); // Adds the turret as a child of parent
	
}

//-------------------------------------
// Default Destructor
//-------------------------------------
Player::~Player()
{
	delete t1; // deletes turret
	delete m_shipTexture; // deletes ship texture
}

//-------------------------------------
// Draws Objects texture
// Param:
//		Renderer2D*: To render the object on the screen
//-------------------------------------
void Player::draw(Renderer2D* m_2dRenderer)
{

	m_2dRenderer->drawSpriteTransformed3x3(m_shipTexture, GlobalTransform);
	t1->draw(m_2dRenderer); // Calls draw function for turret
}

//-------------------------------------
// Updates movement, scale and rotation of an object
// Param:
//		Deltatime: To make all values for movement relative to each other
//-------------------------------------
void Player::update(float deltaTime)
{
	t1->update(deltaTime); // Calls turrets update function
	float drag = 1.0f; // Creates a drag value
	Vector2 pos; // creates a Vector to set the pos
	float rot = 0;
	rotSpeed = 3;
	Vector2 direction(0, 0); 
	Vector2 acceleration; // creates Vector for acceleration
	Vector2 forceSum; // Creates vector for overall force

	//Using input, change vectors position
	Input* input = Input::getInstance();

	if (input->isKeyDown(INPUT_KEY_W))
	{
		direction = Vector2(0, 1); // movement
	}
	if (input->isKeyDown(INPUT_KEY_S))
	{
		direction = Vector2(0, -0.75); // Movement
	}
	if (input->isKeyDown(INPUT_KEY_A))
	{
		rot += rotSpeed * deltaTime; // Rotation
	}
	if (input->isKeyDown(INPUT_KEY_D))
	{
		rot -= rotSpeed * deltaTime; // Rotation
	}

	forceSum = direction * speed;
	acceleration = forceSum / mass;
	Vector2 dampening = -(velocity * drag);
	velocity += (acceleration + dampening) * deltaTime;
	pos += velocity * deltaTime;

	//Create a local matrix for position
	Matrix3 PlayerPos; // Creates Matrix3 to store player position
	Matrix3 PlayerRot; // Creates Matrix3 to store player rotation
	//Copy position from vector to matrix using SetPosition()
	PlayerPos.setPosition(pos); // Sets players Position
	PlayerRot.setRotateZ(rot);	// Sets players Rotation

	//Combine position matrix with LocalTransform
	LocalTransform = LocalTransform * PlayerRot; // Updates local transform
	LocalTransform = LocalTransform * PlayerPos; // Updates local transform

	UpdateTransforms(); // Updates global Transform
	Entity* Collision = CollisionManager::GetInstance()->testCollision(this); // Resolves Collison
	if (Collision)
	{
		velocity = -velocity; // Creates bounce effect by reversing the velocity
	}
}


