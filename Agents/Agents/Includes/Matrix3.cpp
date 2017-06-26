#include "matrix3.h"
#include <math.h>


//----------------------------------------------------
// Default constructor
// initialises identity matrix for matrix 3
//----------------------------------------------------
Matrix3::Matrix3()
{
	m[0][0] = 1;
	m[0][1] = 0;
	m[0][2] = 0;
	m[1][0] = 0;
	m[1][1] = 1;
	m[1][2] = 0;
	m[2][0] = 0;
	m[2][1] = 0;
	m[2][2] = 1;
}
//----------------------------------------------------
// Initalises matrix with xyz values
// Param:
//		Float values for each locations in the 3x3 array
//----------------------------------------------------
Matrix3::Matrix3(float xx, float xy, float xz, float yx, float yy, float yz, float zx, float zy, float zz)
{
	m[0][0] = xx;
	m[0][1] = xy;
	m[0][2] = xz;
	m[1][0] = yx;
	m[1][1] = yy;
	m[1][2] = yz;
	m[2][0] = zx;
	m[2][1] = zy;
	m[2][2] = zz;
}
//----------------------------------------------------
// Default destructor
//----------------------------------------------------
Matrix3::~Matrix3()
{
}

//----------------------------------------------------
// Multiplies 3x3 matrix by vector3
// param:
//		Vector3: Takes in a vector3 rhs 
// return:
//		Returns Vector3 result
//
//----------------------------------------------------
Vector3 Matrix3::operator*(const Vector3& rhs)
{
	Vector3 result;
	result.x = (m[0][0] * rhs.x) + (m[1][0] * rhs.y) + (m[2][0] * rhs.z);
	result.y = (m[0][1] * rhs.x) + (m[1][1] * rhs.y) + (m[2][1] * rhs.z);
	result.z = (m[0][2] * rhs.x) + (m[1][2] * rhs.y) + (m[2][2] * rhs.z);

	return result;
}
//----------------------------------------------------
// Multiples 3x3 matrix by 3x3 matrix 
// param:
//		Matrix3 rhs: Takes in a 3x3 matrix
//
// return:	
//		Returns matrix3 result as 3x3 matrix
//
//----------------------------------------------------
Matrix3 Matrix3::operator*(const Matrix3& rhs)
{
	Matrix3 result;
	result.m[0][0] = m[0][0] * rhs.m[0][0] + m[1][0] * rhs.m[0][1] + m[2][0] * rhs.m[0][2];
	result.m[1][0] = m[0][0] * rhs.m[1][0] + m[1][0] * rhs.m[1][1] + m[2][0] * rhs.m[1][2];
	result.m[2][0] = m[0][0] * rhs.m[2][0] + m[1][0] * rhs.m[2][1] + m[2][0] * rhs.m[2][2];
		
	result.m[0][1] = m[0][1] * rhs.m[0][0] + m[1][1] * rhs.m[0][1] + m[2][1] * rhs.m[0][2];
	result.m[1][1] = m[0][1] * rhs.m[1][0] + m[1][1] * rhs.m[1][1] + m[2][1] * rhs.m[1][2];
	result.m[2][1] = m[0][1] * rhs.m[2][0] + m[1][1] * rhs.m[2][1] + m[2][1] * rhs.m[2][2];

	result.m[0][2] = m[0][2] * rhs.m[0][0] + m[1][2] * rhs.m[0][1] + m[2][2] * rhs.m[0][2];
	result.m[1][2] = m[0][2] * rhs.m[1][0] + m[1][2] * rhs.m[1][1] + m[2][2] * rhs.m[1][2];
	result.m[2][2] = m[0][2] * rhs.m[2][0] + m[1][2] * rhs.m[2][1] + m[2][2] * rhs.m[2][2];
	
	return result;
}
//----------------------------------------------------
// Rotates 3x3 matrix by given angle on X axis
// param: 
//		a: angle in which to rotate by in radians
//
//----------------------------------------------------
void Matrix3::setRotateX(const float a)
{
	m[1][1] = cosf(a);
	m[1][2] = sinf(a);
	m[2][1] = -sinf(a);
	m[2][2] = cosf(a);
	
}
//----------------------------------------------------
// Rotates 3x3 matrix by given angle on y axis
// param: 
//		a: angle in which to rotate by in radians
//
//----------------------------------------------------
void Matrix3::setRotateY(const float a)
{
	m[0][0] = cosf(a);
	m[0][2] = -sinf(a);
	m[2][0] = sinf(a);
	m[2][2] = cosf(a);
}
//----------------------------------------------------
// Rotates 3x3 matrix by given angle on z axis
// param: 
//		a: angle in which to rotate by in radians
//
//----------------------------------------------------
void Matrix3::setRotateZ(const float a)
{
	
	m[0][0] = cosf(a);
	m[0][1] = sinf(a);
	m[1][0] = -sinf(a);
	m[1][1] = cosf(a);
}

void Matrix3::DegreeSetRotateX(const float d)
{
	float r = DegreeToRad(d);

	setRotateX(r);
}

void Matrix3::DegreeSetRotateY(const float d)
{
	float r = DegreeToRad(d);

	setRotateY(r);
}

void Matrix3::DegreeSetRotateZ(const float d)
{
	float r = DegreeToRad(d);

	setRotateZ(r);
}

void Matrix3::setPosition(float posX, float posY)
{
	m[2][0] = posX;
	m[2][1] = posY;
}

void Matrix3::setScale(float scaleX, float scaleY, float scaleZ)
{
	m[0][0] = scaleX;
	m[1][1] = scaleY;
}

Vector2 Matrix3::getPosition()
{
	Vector2 pos;
	pos.x = m[2][0];
	pos.y = m[2][1];
	return pos;
}
Vector2 Matrix3::getScale()
{
	Vector2 scale;
	Vector2 Xcol(m[0][0], m[0][1]);
	Vector2 Ycol(m[1][0], m[1][1]);
	
	scale.x = Xcol.magnitude();
	scale.y = Ycol.magnitude();
	
	return scale;
}

void Matrix3::setPosition(const Vector2 & rhs)
{
	m[2][0] = rhs.x;
	m[2][1] = rhs.y;
}



Vector3& Matrix3::operator[](const int rhs)
{
	return*(Vector3*)m[rhs];
}

Matrix3::operator float*()
{
	return &m[0][0];
}

float Matrix3::RadToDegree(float Rad)
{
	float result;
	const float PI = 3.1415927;
	result = Rad * (180 / PI);

	return result;
}

float Matrix3::DegreeToRad(float Degree)
{
	float result;
	const float PI = 3.1415927;
	result = Degree * (PI / 180);

	return result;
}