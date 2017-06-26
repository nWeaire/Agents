#include "Vector4.h"
#include <math.h>

//----------------------------------------------------
// Default constructor
// Initialises basic Vector 2 with x and y and z and w floats
//----------------------------------------------------
Vector4::Vector4()
{
	x = 0.0f;
	y = 0.0f;
	z = 0.0f;
	w = 0.0f;
}

//----------------------------------------------------
// default constructor
// param: 
//		floats: Takes in floats for x, y, z and w values
//
//----------------------------------------------------
Vector4::Vector4(float newX, float newY, float newZ, float newW)
{
	x = newX;
	y = newY;
	z = newZ;
	w = newW;
}

//----------------------------------------------------
// Default destructor
//----------------------------------------------------
Vector4::~Vector4()
{
}

//----------------------------------------------------
// Overloads + operator
// Adds 2 vector4's together
// param: 
//		Vector4: Vector4 holding a x, y and z and w values
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector4 Vector4::operator+(const Vector4& rhs)
{
	Vector4 result;
	result.x = x + rhs.x;
	result.y = y + rhs.y;
	result.z = z + rhs.z;
	result.w = w + rhs.w;

	return result;
}

//----------------------------------------------------
// Overloads - operator
// subtracts 2 vector4's together
// param: 
//		Vector4: Vector4 holding a x, y and z and w values
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector4 Vector4::operator-(const Vector4& rhs)
{
	Vector4 result;
	result.x = x - rhs.x;
	result.y = y - rhs.y;
	result.z = z - rhs.z;
	result.w = w - rhs.w;

	return result;
}

//----------------------------------------------------
// Overloads * operator
// multiplies 2 vector4's together
// param: 
//		Vector4: Vector4 holding a x, y and z and w values
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector4 Vector4::operator*(const float rhs)
{
	Vector4 result;
	result.x = x * rhs;
	result.y = y * rhs;
	result.z = z * rhs;
	result.w = w * rhs;

	return result;
}

//----------------------------------------------------
// Overloads * operator
// Multiplies float by Vector4
// param: 
//		Vector4: Vector4 holding a x and y and w value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
Vector4 operator*(float lhs, const Vector4 rhs)
{
	Vector4 result;
	result.x = lhs * rhs.x;
	result.y = lhs * rhs.y;
	result.z = lhs * rhs.z;
	result.w = lhs * rhs.w;

	return result;
}

//----------------------------------------------------
// Dot product 
// param: 
//		Vector4: Vector4 holding a x and y and z and w values
// return:
//		Result: Returns the result of the sum as float
//----------------------------------------------------
float Vector4::dot(Vector4 rhs)
{
	float result;
	result = x * rhs.x + y * rhs.y + z * rhs.z + w * rhs.w;
	return result;
}

//----------------------------------------------------
// Cross product 
// param: 
//		Vector4: Vector4 holding a x and y and z and w values
// return:
//		Result: Returns the result of the sum as float
//----------------------------------------------------
Vector4 Vector4::cross(Vector4 rhs)
{
	Vector4 result;
	result.x = y * rhs.z - z * rhs.y;
	result.y = z * rhs.x - x * rhs.z;
	result.z = x * rhs.y - y * rhs.x;
	result.w = 0;
	return result;
}

//----------------------------------------------------
// Finds the distance between to vectors
// Params:
//		Vector4 rhs: Takes in a vector4
//
// Return:
//		Float: Returns a float value of the distance between 2 vectors
//----------------------------------------------------
float Vector4::distance(Vector4 rhs)
{
	Vector4 dis;
	dis.x = rhs.x - x;
	dis.y = rhs.y - y;
	dis.z = rhs.z - z;
	float distance = dis.magnitude();

	return distance;
}


//----------------------------------------------------
// Swizzles the values of a premade vector4 
// returns a vector4 with those new values
//
// Return:
//		Vector4: Returns a vector4 with swizzled values
//----------------------------------------------------
// Start of Swizzles
//----------------------------------------------------
Vector4 Vector4::xxxx()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::xxxy()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::xxxz()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::xxxw()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::xxyx()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::xxyy()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::xxyz()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::xxyw()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::xxzx()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::xxzy()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::xxzz()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::xxzw()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::xxwx()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::xxwy()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::xxwz()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::xxww()
{
	Vector4 result;
	result.x = x;
	result.y = x;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::xyxx()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::xyxy()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::xyxz()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::xyxw()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::xyyx()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::xyyy()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::xyyz()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::xyyw()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::xyzx()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::xyzy()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::xyzz()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::xyzw()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::xywx()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::xywy()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::xywz()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::xyww()
{
	Vector4 result;
	result.x = x;
	result.y = y;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::xzxx()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::xzxy()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::xzxz()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::xzxw()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::xzyx()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::xzyy()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::xzyz()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::xzyw()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::xzzx()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::xzzy()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::xzzz()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::xzzw()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::xzwx()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::xzwy()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::xzwz()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::xzww()
{
	Vector4 result;
	result.x = x;
	result.y = z;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::xwxx()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::xwxy()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::xwxz()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::xwxw()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::xwyx()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::xwyy()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::xwyz()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::xwyw()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::xwzx()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::xwzy()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::xwzz()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::xwzw()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::xwwx()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::xwwy()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::xwwz()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::xwww()
{
	Vector4 result;
	result.x = x;
	result.y = w;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::yxxx()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::yxxy()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::yxxz()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::yxxw()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::yxyx()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::yxyy()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::yxyz()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::yxyw()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::yxzx()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::yxzy()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::yxzz()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::yxzw()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::yxwx()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::yxwy()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::yxwz()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::yxww()
{
	Vector4 result;
	result.x = y;
	result.y = x;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::yyxx()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::yyxy()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::yyxz()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::yyxw()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::yyyx()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::yyyy()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::yyyz()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::yyyw()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::yyzx()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::yyzy()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::yyzz()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::yyzw()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::yywx()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::yywy()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::yywz()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::yyww()
{
	Vector4 result;
	result.x = y;
	result.y = y;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::yzxx()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::yzxy()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::yzxz()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::yzxw()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::yzyx()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::yzyy()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::yzyz()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::yzyw()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::yzzx()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::yzzy()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::yzzz()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::yzzw()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::yzwx()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::yzwy()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::yzwz()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::yzww()
{
	Vector4 result;
	result.x = y;
	result.y = z;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::ywxx()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::ywxy()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::ywxz()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::ywxw()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::ywyx()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::ywyy()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::ywyz()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::ywyw()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::ywzx()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::ywzy()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::ywzz()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::ywzw()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::ywwx()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::ywwy()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::ywwz()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::ywww()
{
	Vector4 result;
	result.x = y;
	result.y = w;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::zxxx()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::zxxy()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::zxxz()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::zxxw()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::zxyx()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::zxyy()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::zxyz()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::zxyw()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::zxzx()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::zxzy()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::zxzz()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::zxzw()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::zxwx()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::zxwy()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::zxwz()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::zxww()
{
	Vector4 result;
	result.x = z;
	result.y = x;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::zyxx()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::zyxy()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::zyxz()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::zyxw()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::zyyx()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::zyyy()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::zyyz()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::zyyw()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::zyzx()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::zyzy()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::zyzz()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::zyzw()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::zywx()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::zywy()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::zywz()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::zyww()
{
	Vector4 result;
	result.x = z;
	result.y = y;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::zzxx()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::zzxy()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::zzxz()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::zzxw()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::zzyx()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::zzyy()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::zzyz()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::zzyw()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::zzzx()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::zzzy()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::zzzz()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::zzzw()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::zzwx()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::zzwy()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::zzwz()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::zzww()
{
	Vector4 result;
	result.x = z;
	result.y = z;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::zwxx()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::zwxy()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = x;
	result.w = y;
	return result;
}

Vector4 Vector4::zwxz()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::zwxw()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::zwyx()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::zwyy()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::zwyz()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::zwyw()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::zwzx()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::zwzy()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::zwzz()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::zwzw()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::zwwx()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::zwwy()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::zwwz()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::zwww()
{
	Vector4 result;
	result.x = z;
	result.y = w;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::wxxx()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::wxxy()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::wxxz()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::wxxw()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::wxyx()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::wxyy()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::wxyz()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::wxyw()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::wxzx()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::wxzy()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::wxzz()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::wxzw()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::wxwx()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::wxwy()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::wxwz()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::wxww()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::wyxx()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::wyxy()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::wyxz()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::wyxw()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::wyyx()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::wyyy()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::wyyz()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::wyyw()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::wyzx()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::wyzy()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::wyzz()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::wyzw()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::wywx()
{
	Vector4 result;
	result.x = w;
	result.y = x;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::wywy()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::wywz()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::wyww()
{
	Vector4 result;
	result.x = w;
	result.y = y;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::wzxx()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::wzxy()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::wzxz()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::wzxw()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::wzyx()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::wzyy()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::wzyz()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::wzyw()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::wzzx()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::wzzy()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::wzzz()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::wzzw()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::wzwx()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::wzwy()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::wzwz()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::wzww()
{
	Vector4 result;
	result.x = w;
	result.y = z;
	result.z = w;
	result.w = w;

	return result;
}

Vector4 Vector4::wwxx()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = x;
	result.w = x;

	return result;
}

Vector4 Vector4::wwxy()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = x;
	result.w = y;

	return result;
}

Vector4 Vector4::wwxz()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = x;
	result.w = z;

	return result;
}

Vector4 Vector4::wwxw()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = x;
	result.w = w;

	return result;
}

Vector4 Vector4::wwyx()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = y;
	result.w = x;

	return result;
}

Vector4 Vector4::wwyy()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = y;
	result.w = y;

	return result;
}

Vector4 Vector4::wwyz()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = y;
	result.w = z;

	return result;
}

Vector4 Vector4::wwyw()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = y;
	result.w = w;

	return result;
}

Vector4 Vector4::wwzx()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = z;
	result.w = x;

	return result;
}

Vector4 Vector4::wwzy()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = z;
	result.w = y;

	return result;
}

Vector4 Vector4::wwzz()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = z;
	result.w = z;

	return result;
}

Vector4 Vector4::wwzw()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = z;
	result.w = w;

	return result;
}

Vector4 Vector4::wwwx()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = w;
	result.w = x;

	return result;
}

Vector4 Vector4::wwwy()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = w;
	result.w = y;

	return result;
}

Vector4 Vector4::wwwz()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = w;
	result.w = z;

	return result;
}

Vector4 Vector4::wwww()
{
	Vector4 result;
	result.x = w;
	result.y = w;
	result.z = w;
	result.w = w;

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
float Vector4::magnitude()
{
	float result;
	result = sqrtf((x*x) + (y*y) + (z*z) + (w*w));
	return result;
}

//----------------------------------------------------
// Normalises a float to values in ratio of 1
//----------------------------------------------------
void Vector4::normalise()
{
	float length = magnitude();
	if (length != 0)
	{
		x /= length;
		y /= length;
		z /= length;
		w /= length;
	}
}

Vector4 Vector4::posOperator()
{
	Vector4 result;
	result.x = +x;
	result.y = +y;
	result.z = +z;
	result.z = +w;

	return result;
}

//----------------------------------------------------
// Operator overload for negative sign
// Makes Vector2 negative
// return:
//		Returns float result, which is the maginitude
//----------------------------------------------------
Vector4 Vector4::operator-()
{
	Vector4 result;
	result.x = -x;
	result.y = -y;
	result.z = -z;
	result.z = -w;

	return result;
}

//----------------------------------------------------
// operator overload for / sign
// param:
//		Vector4: Vector4 rhs with x and y and z values
// return:
//		returns x and y and z values for rhs
//----------------------------------------------------
Vector4 Vector4::operator/(const float rhs)
{
	Vector4 result;
	result.x = x / rhs;
	result.y = y / rhs;
	result.z = z / rhs;
	result.w = w / rhs;
	return result;
}
Vector4 Vector4::operator/(const Vector4& rhs)
{
	Vector4 result;
	result.x = x / rhs.x;
	result.y = y / rhs.y;
	result.z = z / rhs.z;
	result.w = w / rhs.w;
	return result;
}
//----------------------------------------------------
// operator overload for += sign
// param:
//		Vector4: Vector4 rhs with x and y values
// return:
//		returns x and y values for rhs
//----------------------------------------------------
Vector4 Vector4::operator+= (const Vector4& rhs)
{
	x += rhs.x;
	y += rhs.y;
	z += rhs.z;
	w += rhs.w;

	return *this;
}

float& Vector4::operator[](const int rhs)
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
	else if (rhs == 3)
	{
		return w;
	}
	else
	{
		return x;
	}
}

Vector4::operator float*()
{
	return &x;
}

