#include "Vector2.h"
#include "Matrix2.h"
#include <iostream>
#include <math.h>

//----------------------------------------------------
// Default constructor
// Initialises basic Vector 2 with x and y floats
//----------------------------------------------------
Vector2::Vector2()
{
	x = 0.0;
	y = 0.0;
}

//----------------------------------------------------
// default constructor
// param: 
//		floats: Takes in floats for x and y values
//
//----------------------------------------------------
Vector2::Vector2(float newX, float newY)
{
	x = newX;
	y = newY;
}

//----------------------------------------------------
// Default destructor
//----------------------------------------------------
Vector2::~Vector2()
{
}

//----------------------------------------------------
// Overloads + operator
// Adds 2 vector2's together
// param: 
//		Vector2: Vector2 holding a x and y value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector2 Vector2::operator+(const Vector2& rhs)
{
	Vector2 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;

	return result;
}

//----------------------------------------------------
// Overloads - operator
// Subtracts 2 vector2's together
// param: 
//		Vector2: Vector2 holding a x and y value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector2 Vector2::operator-(const Vector2& rhs)
{
	Vector2 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;

	return result;
}

//----------------------------------------------------
// Overloads * operator
// Multiplies 2 vector2's together
// param: 
//		Vector2: Vector2 holding a x and y value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector2 Vector2::operator*(const float rhs)
{
	Vector2 result;
	result.x = x * rhs;
	result.y = y * rhs;

	return result;
}

//----------------------------------------------------
// Overloads * operator
// Multiplies float by Vector2
// param: 
//		Vector2: Vector2 holding a x and y value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector2 operator*(float lhs, const Vector2 rhs)
{	
	Vector2 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	return result;
}

//----------------------------------------------------
// Dot product 
// param: 
//		Vector2: Vector2 holding a x and y value
// return:
//		Result: Returns the result of the sum as float
//----------------------------------------------------
float Vector2::dot(Vector2 rhs)
{
	float result;
	result = x * rhs.x + y * rhs.y;
	return result;
}

//----------------------------------------------------
// Swizzles the values of a premade vector2 and returns a vector2 with those new values
//
// Return:
//		Vector2: Returns a vector2 with swizzled values
//----------------------------------------------------
// Start of Swizzles
//----------------------------------------------------
Vector2 Vector2::xx()
{
	Vector2 result;

	result.x = x;
	result.y = x;


	return result;
}
Vector2 Vector2::yx()
{
	Vector2 result;

	result.x = y;
	result.y = x;


	return result;
}
Vector2 Vector2::yy()
{
	Vector2 result;

	result.x = y;
	result.y = y;


	return result;
}
//----------------------------------------------------
// End of Swizzles
//----------------------------------------------------


//----------------------------------------------------
// Finds the distance between to vectors
// Params:
//		Vector2 rhs: Takes in a vector 2
//
// Return:
//		Float: Returns a float value of the distance between 2 vectors
//----------------------------------------------------
float Vector2::distance(Vector2 rhs)
{
	Vector2 dis;
	dis.x = rhs.x - x;
	dis.y = rhs.y - y;
	float distance = dis.magnitude();

	return distance;
}
//----------------------------------------------------
// gets magnitude of float
// return:
//		Returns float result, which is the maginitude
//----------------------------------------------------
float Vector2::magnitude()
{
	float result;
	result = sqrtf((x*x) + (y*y));
	return result;
}
//----------------------------------------------------
// Normalises a float to values in ratio of 1
//----------------------------------------------------
void Vector2::normalise()
{
	float length = magnitude();
	if (length != 0)
	{
		x /= length;
		y /= length;
	}
}

//----------------------------------------------------
// normalised float value
// return:
//		Returns float result
//----------------------------------------------------
Vector2 Vector2::normalised(Vector2 data)
{
	Vector2 result;
	float Mag = data.magnitude();
	if (!Mag == 0)
	{
		result.x = x / Mag;
		result.y = y / Mag;
		
	}
	return result;
}

Vector2 Vector2::operator/(const float rhs)
{
	Vector2 result;
	result.x = x / rhs;
	result.y = y / rhs;

	return result;
}
Vector2 Vector2::operator/(const Vector2& rhs)
{
	Vector2 result;
	result.x = x / rhs.x;
	result.y = y / rhs.y;

	return result;
}



Vector2 Vector2::posOperator()
{
	Vector2 result;
	result.x = +x;
	result.y = +y;

	return result;
}
//----------------------------------------------------
// Operator overload for negative sign
// Makes Vector2 negative
// return:
//		Returns float result, which is the maginitude
//----------------------------------------------------
Vector2 Vector2::operator-()
{
	Vector2 result;
	result.x = -x;
	result.y = -y;

	return result;
}
//----------------------------------------------------
// operator overload for += sign
// param:
//		Vector2: Vector2 rhs with x and y values
// return:
//		returns x and y values for rhs
//----------------------------------------------------
Vector2 Vector2::operator+= (const Vector2& rhs)
{
	x += rhs.x;
	y += rhs.y;

	return *this;
}

float& Vector2::operator[](const int rhs)
{
	if (rhs == 0)
	{
		return x;
	}
	else if (rhs == 1)
	{
		return y;
	}
	else
	{
		return x;
	}
}

Vector2::operator float*()
{
	return &x;
}