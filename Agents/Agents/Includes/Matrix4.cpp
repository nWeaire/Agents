#include "Matrix4.h"
#include <math.h>
#include "Vector3.h"

//----------------------------------------------------
// Default constructor
// initialises identity 4x4 matrix for matrix4
//----------------------------------------------------
Matrix4::Matrix4()
{
	m[0][0] = 1;
	m[0][1] = 0;
	m[0][2] = 0;
	m[0][3] = 0;
	m[1][0] = 0;
	m[1][1] = 1;
	m[1][2] = 0;
	m[1][3] = 0;
	m[2][0] = 0;
	m[2][1] = 0;
	m[2][2] = 1;
	m[2][3] = 0;
	m[3][0] = 0;
	m[3][1] = 0;
	m[3][2] = 0;
	m[3][3] = 1;
}

//----------------------------------------------------
// Initalises matrix with xyzw values
// Param:
//		Float values for each locations in the 4x4 array
//----------------------------------------------------
Matrix4::Matrix4(float xx, float xy, float xz, float xw, float yx, float yy, float yz, float yw, float zx, float zy, float zz, float zw, float wx, float wy, float wz, float ww)
{
	m[0][0] = xx;
	m[0][1] = xy;
	m[0][2] = xz;
	m[0][3] = xw;
	m[1][0] = yx;
	m[1][1] = yy;
	m[1][2] = yz;
	m[1][3] = yw;
	m[2][0] = zx;
	m[2][1] = zy;
	m[2][2] = zz;
	m[2][3] = zw;
	m[3][0] = wx;
	m[3][1] = wy;
	m[3][2] = wz;
	m[3][3] = ww;
}

//----------------------------------------------------
// Default destructor
//----------------------------------------------------
Matrix4::~Matrix4()
{
}

//----------------------------------------------------
// Multiplies 4x4 matrix by vector4
// param:
//		Vector4 rhs: Takes in a vector 4 
// return:
//		Returns Vector4 result
//
//----------------------------------------------------
Vector4 Matrix4::operator*(const Vector4& rhs)
{
	Vector4 result;
	result.x = m[0][0] * rhs.x + m[1][0] * rhs.y + m[2][0] * rhs.z + m[3][0] * rhs.w;
	result.y = m[0][1] * rhs.x + m[1][1] * rhs.y + m[2][1] * rhs.z + m[3][1] * rhs.w;
	result.z = m[0][2] * rhs.x + m[1][2] * rhs.y + m[2][2] * rhs.z + m[3][2] * rhs.w;
	result.w = m[0][3] * rhs.x + m[1][3] * rhs.y + m[2][3] * rhs.z + m[3][3] * rhs.w;
	return result;
}

//----------------------------------------------------
// Multiples 4x4 matrix by 4x4 matrix 
// param:
//		Matrix4 rhs: Takes in a 4x4 matrix
//
// return:	
//		Returns matrix4 result as 4x4 matrix
//
//----------------------------------------------------
Matrix4 Matrix4::operator*(const Matrix4 & rhs)
{
	Matrix4 result;
	result.m[0][0] = m[0][0] * rhs.m[0][0] + m[1][0] * rhs.m[0][1] + m[2][0] * rhs.m[0][2] + m[3][0] * rhs.m[0][3];
	result.m[1][0] = m[0][0] * rhs.m[1][0] + m[1][0] * rhs.m[1][1] + m[2][0] * rhs.m[1][2] + m[3][0] * rhs.m[1][3];
	result.m[2][0] = m[0][0] * rhs.m[2][0] + m[1][0] * rhs.m[2][1] + m[2][0] * rhs.m[2][2] + m[3][0] * rhs.m[2][3];
	result.m[3][0] = m[0][0] * rhs.m[3][0] + m[1][0] * rhs.m[3][1] + m[2][0] * rhs.m[3][2] + m[3][0] * rhs.m[3][3];
											   						   						   				 	
	result.m[0][1] = m[0][1] * rhs.m[0][0] + m[1][1] * rhs.m[0][1] + m[2][1] * rhs.m[0][2] + m[3][1] * rhs.m[0][3];
	result.m[1][1] = m[0][1] * rhs.m[1][0] + m[1][1] * rhs.m[1][1] + m[2][1] * rhs.m[1][2] + m[3][1] * rhs.m[1][3];
	result.m[2][1] = m[0][1] * rhs.m[2][0] + m[1][1] * rhs.m[2][1] + m[2][1] * rhs.m[2][2] + m[3][1] * rhs.m[2][3];
	result.m[3][1] = m[0][1] * rhs.m[3][0] + m[1][1] * rhs.m[3][1] + m[2][1] * rhs.m[3][2] + m[3][1] * rhs.m[3][3];
					   						   						   						   				 	
	result.m[0][2] = m[0][2] * rhs.m[0][0] + m[1][2] * rhs.m[0][1] + m[2][2] * rhs.m[0][2] + m[3][2] * rhs.m[0][3];
	result.m[1][2] = m[0][2] * rhs.m[1][0] + m[1][2] * rhs.m[1][1] + m[2][2] * rhs.m[1][2] + m[3][2] * rhs.m[1][3];
	result.m[2][2] = m[0][2] * rhs.m[2][0] + m[1][2] * rhs.m[2][1] + m[2][2] * rhs.m[2][2] + m[3][2] * rhs.m[2][3];
	result.m[3][2] = m[0][2] * rhs.m[3][0] + m[1][2] * rhs.m[3][1] + m[2][2] * rhs.m[3][2] + m[3][2] * rhs.m[3][3];
					   						   						   						   				 	
	result.m[0][3] = m[0][3] * rhs.m[0][0] + m[1][3] * rhs.m[0][1] + m[2][3] * rhs.m[0][2] + m[3][3] * rhs.m[0][3];
	result.m[1][3] = m[0][3] * rhs.m[1][0] + m[1][3] * rhs.m[1][1] + m[2][3] * rhs.m[1][2] + m[3][3] * rhs.m[1][3];
	result.m[2][3] = m[0][3] * rhs.m[2][0] + m[1][3] * rhs.m[2][1] + m[2][3] * rhs.m[2][2] + m[3][3] * rhs.m[2][3];
	result.m[3][3] = m[0][3] * rhs.m[3][0] + m[1][3] * rhs.m[3][1] + m[2][3] * rhs.m[3][2] + m[3][3] * rhs.m[3][3];
	return result;
}

//----------------------------------------------------
// Rotates 4x4 matrix by given angle on X axis
// param: 
//		a: angle in which to rotate by in radians
//
//----------------------------------------------------
void Matrix4::setRotateX(const float a)
{
	m[1][1] = cosf(a);
	m[1][2] = sinf(a);
	m[2][1] = -sinf(a);
	m[2][2] = cosf(a);
}

//----------------------------------------------------
// Rotates 4x4 matrix by given angle on Y axis
// param: 
//		a: angle in which to rotate by in radians
//
//----------------------------------------------------
void Matrix4::setRotateY(const float a)
{
	m[0][0] = cosf(a);
	m[0][2] = -sinf(a);
	m[2][0] = sin(a);
	m[2][2] = cosf(a);
}

//----------------------------------------------------
// Rotates 4x4 matrix by given angle on Z axis
// param: 
//		a: angle in which to rotate by in radians
//
//----------------------------------------------------
void Matrix4::setRotateZ(const float a)
{
	m[0][0] = cosf(a);
	m[0][1] = sinf(a);
	m[1][0] = -sinf(a);
	m[1][1] = cosf(a);
}
void Matrix4::DegreeSetRotateX(const float d)
{
	float r = DegreeToRad(d);

	setRotateX(r);
}
void Matrix4::DegreeSetRotateY(const float d)
{
	float r = DegreeToRad(d);

	setRotateY(r);
}
void Matrix4::DegreeSetRotateZ(const float d)
{
	float r = DegreeToRad(d);

	setRotateZ(r);
}
Vector4& Matrix4::operator[](const int rhs)
{
	return*(Vector4*)m[rhs];
}
Matrix4::operator float*()
{
	return &m[0][0];
}

float Matrix4::RadToDegree(float Rad)
{
	float result;
	const float PI = 3.1415927;
	result = Rad * (180 / PI);

	return result;
}

float Matrix4::DegreeToRad(float Degree)
{
	float result;
	const float PI = 3.1415927;
	result = Degree * (PI / 180);

	return result;
}

void Matrix4::setPosition(float posX, float posY, float posZ)
{
	m[3][0] = posX;
	m[3][1] = posY;
	m[3][2] = posZ;
}

void Matrix4::setScale(float scaleX, float scaleY, float scaleZ)
{
	m[0][0] = scaleX;
	m[1][1] = scaleY;
	m[2][2] = scaleZ;
}

Vector3 Matrix4::getPosition()
{
	Vector3 pos;
	pos.x = m[3][0];
	pos.y = m[3][1];
	pos.z = m[3][2];
	return pos;
}
Vector3 Matrix4::getScale()
{
	Vector3 scale;
	Vector3 Xcol(m[0][0], m[0][1], m[0][2]);
	Vector3 Ycol(m[1][0], m[1][1], m[1][2]);
	Vector3 Zcol(m[2][0], m[2][1], m[2][2]);
	scale.x = Xcol.magnitude();
	scale.y = Ycol.magnitude();
	scale.z = Zcol.magnitude();
	return scale;
}

void Matrix4::setPosition(const Vector3 & rhs)
{
	m[3][0] = rhs.x;
	m[3][1] = rhs.y;
	m[3][2] = rhs.z;
}



Matrix4 Matrix4::LookAt(Vector3 from, Vector3 to, Vector3 up)
{
    Vector3 zAxis = to - from;
	zAxis.normalise();
	Vector3 xAxis = up.cross(zAxis);
	xAxis.normalise();
	Vector3 yAxis = zAxis.cross(xAxis);

	Matrix4 Result;
	Result[0][0] = xAxis.x;
	Result[0][1] = yAxis.x;
	Result[0][2] = zAxis.x;
	Result[0][3] = 0;
	Result[1][0] = xAxis.y;
	Result[1][1] = yAxis.y;
	Result[1][2] = zAxis.y;
	Result[1][3] = 0;
	Result[2][0] = xAxis.z;
	Result[2][1] = yAxis.z;
	Result[2][2] = zAxis.z;
	Result[2][3] = 0;
	Result[3][0] = -to.x;
	Result[3][1] = -to.y;
	Result[3][2] = -to.z;
	Result[3][3] = 1;

	return Result;
}