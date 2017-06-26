#include "Matrix2.h"
#include <math.h>

//----------------------------------------------------
// Default constructor
// initialises identity 2x2 matrix for matrix2
//----------------------------------------------------
Matrix2::Matrix2()
{
	m[0][0] = 1;
	m[0][1] = 0;
	m[1][0] = 0;
	m[1][1] = 1;
}

//----------------------------------------------------
// Initalises 2x2 matrix with xy values
// Param:
//		Float values for each locations in the 2x2 array
//----------------------------------------------------
Matrix2::Matrix2(float xx, float xy, float yx, float yy)
{
	m[0][0] = xx;
	m[1][0] = xy;
	m[0][1] = yx;
	m[1][1] = yy;
}

//----------------------------------------------------
// Default destructor
//----------------------------------------------------
Matrix2::~Matrix2()
{
}

//----------------------------------------------------
// Multiplies 2x2 matrix by vector2
// param:
//		Vector2: Takes in a vector2 rhs 
// return:
//		Returns Vector2 result
//
//----------------------------------------------------
Vector2 Matrix2::operator*(const Vector2 & rhs)
{
	Vector2 result;
	result.x = (m[0][0] * rhs.x) + (m[0][1] * rhs.y);
	result.y = (m[1][0] * rhs.x) + (m[1][1] * rhs.y);
	return result;
}

//----------------------------------------------------
// Multiples 2x2 matrix by 2x2 matrix 
// param:
//		Matrix2 rhs: Takes in a 2x2 matrix
//
// return:	
//		Returns matrix2 result as 2x2 matrix
//
//----------------------------------------------------
Matrix2 Matrix2::operator*(const Matrix2& rhs)
{
	Matrix2 result;
	result.m[0][0] = m[0][0] * rhs.m[0][0] + m[0][1] * rhs.m[1][0];
	result.m[0][1] = m[0][0] * rhs.m[0][1] + m[0][1] * rhs.m[1][1];

	result.m[1][0] = m[1][0] * rhs.m[0][0] + m[1][1] * rhs.m[1][0];
	result.m[1][1] = m[1][0] * rhs.m[0][1] + m[1][1] * rhs.m[1][1];

	return result;
}

//----------------------------------------------------
// Rotates 2x2 matrix by given angle
// param: 
//		a: angle in which to rotate by in radians
//
//----------------------------------------------------
void Matrix2::setRotate(const float a)
{
	m[0][0] = cosf(a);
	m[0][1] = -sinf(a);
	m[1][0] = sinf(a);
	m[1][1] = cosf(a);	
}

void Matrix2::DegreeSetRotate(const float d)
{
	float r = DegreeToRad(d);
	
	setRotate(r);
}



Vector2& Matrix2::operator[](const int rhs)
{
	return*(Vector2*)m[rhs];
}

Matrix2::operator float*()
{
	return &m[0][0];
}

float Matrix2::RadToDegree(float Rad)
{
	float result;
	const float PI = 3.1415927;
	result = Rad * (180 / PI);

	return result;
}

float Matrix2::DegreeToRad(float Degree)
{
	float result;
	const float PI = 3.1415927;
	result = Degree * (PI / 180);

	return result;
}

float Determiant()
{
	return 0;
}