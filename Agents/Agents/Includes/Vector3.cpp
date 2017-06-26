#include "Vector3.h"
#include <math.h>
//----------------------------------------------------
// Default constructor
// Initialises basic Vector 2 with x and y and z floats
//----------------------------------------------------
Vector3::Vector3()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
}

//----------------------------------------------------
// default constructor
// param: 
//		floats: Takes in floats for x, y and z values
//
//----------------------------------------------------
Vector3::Vector3(float newX, float newY, float newZ)
{
	x = newX;
	y = newY;
	z = newZ;
}

//----------------------------------------------------
// Default destructor
//----------------------------------------------------
Vector3::~Vector3()
{
}

//----------------------------------------------------
// Overloads + operator
// Adds 2 vector3's together
// param: 
//		Vector3: Vector3 holding a x, y and z values
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector3 Vector3::operator+(const Vector3& rhs)
{
	Vector3 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;
	result.z = z + rhs.z;

	return result;
}

//----------------------------------------------------
// Overloads - operator
// Subtracts 2 vector3's together
// param: 
//		Vector3: Vector3 holding a x, y and z value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector3 Vector3::operator-(const Vector3& rhs)
{
	Vector3 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;

	return result;
}

//----------------------------------------------------
// Overloads * operator
// Multiplies 2 vector3's together
// param: 
//		Vector3: Vector3 holding a x, y and z value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector3 Vector3::operator*(const float rhs)
{
	Vector3 result;
	result.x = x * rhs;
	result.y = y * rhs;
	result.z = z * rhs;

	return result;
}

//----------------------------------------------------
// Overloads * operator
// Multiplies float by Vector3
// param: 
//		Vector3: Vector3 holding a x and y value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector3 operator*(float lhs, const Vector3 rhs)
{
	Vector3 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	result.z = lhs * rhs.z;
	return result;
}

//----------------------------------------------------
// Dot product 
// param: 
//		Vector3: Vector3 holding a x and y and z values
// return:
//		Result: Returns the result of the sum as float
//----------------------------------------------------
float Vector3::dot(Vector3 rhs)
{
	float result;
	result = x * rhs.x + y * rhs.y + z * rhs.z;
	return result;
}

//----------------------------------------------------
// Cross product 
// param: 
//		Vector3: Vector3 holding a x and y and z values
// return:
//		Result: Returns the result of the sum as float
//----------------------------------------------------
Vector3 Vector3::cross(Vector3 rhs)
{
	Vector3 result;
	result.x = y * rhs.z - z * rhs.y;
	result.y = z * rhs.x - x * rhs.z;
	result.z = x * rhs.y - y * rhs.x;
	return result;
}

//----------------------------------------------------
// Finds the distance between to vectors
// Params:
//		Vector3 rhs: Takes in a vector3
//
// Return:
//		Float: Returns a float value of the distance between 2 vectors
//----------------------------------------------------
float Vector3::distance(Vector3 rhs)
{
	Vector3 dis;
	dis.x = rhs.x - x;
	dis.y = rhs.y - y;
	dis.z = rhs.z - z;
	float distance = dis.magnitude();

	return distance;
}

//----------------------------------------------------
// Swizzles the values of a premade vector3 
// returns a vector3 with those new values
//
// Return:
//		Vector3: Returns a vector3 with swizzled values
//----------------------------------------------------
// Start of Swizzles
//----------------------------------------------------
Vector3 Vector3::xxx()
{
	Vector3 result;

	result.x = x;
	result.y = x;
	result.z = x;

	return result;
}

Vector3 Vector3::xxy()
{
	Vector3 result;

	result.x = x;
	result.y = x;
	result.z = y;

	return result;
}

Vector3 Vector3::xxz()
{
	Vector3 result;

	result.x = x;
	result.y = x;
	result.z = z;

	return result;
}

Vector3 Vector3::xyx()
{
	Vector3 result;

	result.x = x;
	result.y = y;
	result.z = x;

	return result;
}

Vector3 Vector3::xyy()
{
	Vector3 result;

	result.x = x;
	result.y = y;
	result.z = y;

	return result;
}

Vector3 Vector3::xyz()
{
	Vector3 result;

	result.x = x;
	result.y = y;
	result.z = z;

	return result;
}

Vector3 Vector3::xzx()
{
	Vector3 result;

	result.x = x;
	result.y = z;
	result.z = x;

	return result;
}

Vector3 Vector3::xzy()
{
	Vector3 result;

	result.x = x;
	result.y = z;
	result.z = y;

	return result;
}

Vector3 Vector3::xzz()
{
	Vector3 result;

	result.x = x;
	result.y = z;
	result.z = z;

	return result;
}

Vector3 Vector3::yxx()
{
	Vector3 result;

	result.x = y;
	result.y = x;
	result.z = x;

	return result;
}

Vector3 Vector3::yxy()
{
	Vector3 result;

	result.x = y;
	result.y = x;
	result.z = y;

	return result;
}

Vector3 Vector3::yxz()
{
	Vector3 result;

	result.x = y;
	result.y = x;
	result.z = z;

	return result;
}

Vector3 Vector3::yyx()
{
	Vector3 result;

	result.x = y;
	result.y = y;
	result.z = x;

	return result;
}

Vector3 Vector3::yyy()
{
	Vector3 result;

	result.x = y;
	result.y = y;
	result.z = y;

	return result;
}

Vector3 Vector3::yyz()
{
	Vector3 result;

	result.x = y;
	result.y = y;
	result.z = z;

	return result;
}

Vector3 Vector3::yzx()
{
	Vector3 result;

	result.x = y;
	result.y = z;
	result.z = x;

	return result;
}

Vector3 Vector3::yzy()
{
	Vector3 result;

	result.x = y;
	result.y = z;
	result.z = y;

	return result;
}

Vector3 Vector3::yzz()
{
	Vector3 result;

	result.x = y;
	result.y = z;
	result.z = z;

	return result;
}

Vector3 Vector3::zxx()
{
	Vector3 result;

	result.x = z;
	result.y = x;
	result.z = x;

	return result;
}

Vector3 Vector3::zxy()
{
	Vector3 result;

	result.x = z;
	result.y = x;
	result.z = y;

	return result;
}

Vector3 Vector3::zxz()
{
	Vector3 result;

	result.x = z;
	result.y = x;
	result.z = z;

	return result;
}

Vector3 Vector3::zyx()
{
	Vector3 result;

	result.x = z;
	result.y = y;
	result.z = x;

	return result;
}

Vector3 Vector3::zyy()
{
	Vector3 result;

	result.x = z;
	result.y = y;
	result.z = y;

	return result;
}

Vector3 Vector3::zyz()
{
	Vector3 result;

	result.x = z;
	result.y = y;
	result.z = z;

	return result;
}

Vector3 Vector3::zzx()
{
	Vector3 result;

	result.x = z;
	result.y = z;
	result.z = x;

	return result;
}

Vector3 Vector3::zzy()
{
	Vector3 result;

	result.x = z;
	result.y = z;
	result.z = y;

	return result;
}

Vector3 Vector3::zzz()
{
	Vector3 result;

	result.x = z;
	result.y = z;
	result.z = z;

	return result;
}
//----------------------------------------------------
// End of Swizzles
//----------------------------------------------------



//----------------------------------------------------
// gets magnitude of float
// return:
//		Returns float result, which is the maginitude
//----------------------------------------------------
float Vector3::magnitude()
{
	float result;
	result = sqrtf((x*x) + (y*y) + (z*z));
	return result;
}

//----------------------------------------------------
// Normalises a float to values in ratio of 1
//----------------------------------------------------
void Vector3::normalise()
{
	float length = magnitude();
	if (length != 0)
	{
		x /= length;
		y /= length;
		z /= length;
	}
}

//----------------------------------------------------
// normalised float value
// return:
//		Returns float result
//----------------------------------------------------
Vector3 Vector3::normalised(Vector3 data)
{
	Vector3 result;
	float Mag = data.magnitude();
	if (!Mag == 0)
	{
		result.x = x / Mag;
		result.y = y / Mag;
		result.z = z / Mag;
	}
	return result;
}

Vector3 Vector3::posOperator()
{
	Vector3 result;
	result.x = +x;
	result.y = +y;
	result.z = +z;

	return result;
}

//----------------------------------------------------
// Operator overload for negative sign
// Makes Vector2 negative
// return:
//		Returns float result, which is the maginitude
//----------------------------------------------------
Vector3 Vector3::operator-()
{
	Vector3 result;
	result.x = -x;
	result.y = -y;
	result.z = -z;

	return result;
}

//----------------------------------------------------
// operator overload for / sign
// param:
//		Float: float value to divde vector 3 by
// return:
//		returns x and y and z values for rhs
//----------------------------------------------------
Vector3 Vector3::operator/(const float rhs)
{
	Vector3 result;
	result.x = x / rhs;
	result.y = y / rhs;
	result.z = z / rhs;

	return result;
}
//----------------------------------------------------
// operator overload for / sign
// param:
//		Vector3: Vector3 rhs with x and y and z values
// return:
//		returns x and y and z values for rhs
//----------------------------------------------------
Vector3 Vector3::operator/(const Vector3& rhs)
{
	Vector3 result;
	result.x = x / rhs.x;
	result.y = y / rhs.y;
	result.z = z / rhs.z;

	return result;
}

//----------------------------------------------------
// operator overload for += sign
// param:
//		Vector3: Vector3 rhs with x and y values
// return:
//		returns x and y values for rhs
//----------------------------------------------------
Vector3 Vector3::operator+= (const Vector3& rhs)
{
	x += rhs.x;
	y += rhs.y;
	z += rhs.z;

	return *this;
}

float& Vector3::operator[](const int rhs)
{
	if (rhs == 0)
	{
		return x;
	}
	else if (rhs == 1)
	{
		return y;
	}
	else if (rhs == 2)
	{
		return z;
	}
	else
	{
		return x;
	}
}

Vector3::operator float*()
{
	return &x;
}

