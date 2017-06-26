#pragma once
#include "Vector4.h"
#include "Vector3.h"

#ifdef STATIC_LIB //using static library
#define MATH_DLL
#else // using dynamic library

#ifdef DLL_EXPORT // we are exporting
#define MATH_DLL __declspec(dllexport)
#else // we are importing
#define MATH_DLL __declspec(dllimport)
#endif
#endif


class Matrix4
{
public:

	//----------------------------------------------------
	// Default constructor
	// initialises identity 4x4 matrix for matrix4
	//----------------------------------------------------
	MATH_DLL Matrix4();

	//----------------------------------------------------
	// Initalises matrix with xyzw values
	// Param:
	//		Float values for each locations in the 4x4 array
	//----------------------------------------------------
	MATH_DLL Matrix4(float xx, float xy, float xz, float xw, float yy, float yx, float yz, float yw, float zz, float zx, float zy, float zw, float ww, float wx, float wy, float wz);
	
	//----------------------------------------------------
	// Default destructor
	//----------------------------------------------------
	MATH_DLL ~Matrix4();

	//----------------------------------------------------
	// Multiplies 4x4 matrix by vector4
	// param:
	//		Vector4 rhs: Takes in a vector 4 
	// return:
	//		Returns Vector4 result
	//
	//----------------------------------------------------
	MATH_DLL Vector4 operator*(const Vector4 & rhs);

	//----------------------------------------------------
	// Multiples 4x4 matrix by 4x4 matrix 
	// param:
	//		Matrix4 rhs: Takes in a 4x4 matrix
	//
	// return:	
	//		Returns matrix4 result as 4x4 matrix
	//
	//----------------------------------------------------
	MATH_DLL Matrix4 operator*(const Matrix4 & rhs);

	//----------------------------------------------------
	// Rotates 4x4 matrix by given angle on X axis
	// param: 
	//		a: angle in which to rotate by in radians
	//
	//----------------------------------------------------
	MATH_DLL void setRotateX(const float a);

	//----------------------------------------------------
	// Rotates 4x4 matrix by given angle on Y axis
	// param: 
	//		a: angle in which to rotate by in radians
	//
	//----------------------------------------------------
	MATH_DLL void setRotateY(const float a);

	//----------------------------------------------------
	// Rotates 4x4 matrix by given angle on Z axis
	// param: 
	//		a: angle in which to rotate by in radians
	//
	//----------------------------------------------------
	MATH_DLL void setRotateZ(const float a);

	//----------------------------------------------------
	// Converts Degrees to radians
	// Rotates 3x3 matrix by radians on the X axis
	// param: 
	//		a: angle in which to rotate by in degrees
	//
	//----------------------------------------------------
	MATH_DLL void DegreeSetRotateX(const float a);

	//----------------------------------------------------
	// Converts Degrees to radians
	// Rotates 3x3 matrix by radians on the Y axis
	// param: 
	//		a: angle in which to rotate by in degrees
	//
	//----------------------------------------------------
	MATH_DLL void DegreeSetRotateY(const float a);
	
	//----------------------------------------------------
	// Converts Degrees to radians
	// Rotates 3x3 matrix by radians on the Z axis
	// param: 
	//		a: angle in which to rotate by in degrees
	//
	//----------------------------------------------------
	MATH_DLL void DegreeSetRotateZ(const float a);

	//----------------------------------------------------
	// Converts radians to degrees
	// param: 
	//		Rad: takes in a radian
	//
	//----------------------------------------------------
	MATH_DLL float Matrix4::RadToDegree(float Rad);

	//----------------------------------------------------
	// Converts degrees to radians
	// param: 
	//		degree: Takes in a degree
	//
	//----------------------------------------------------
	MATH_DLL float DegreeToRad(float Degree);

	//----------------------------------------------------
	// Sets the Position of a matrix
	// param: 
	//		posX: float value to change position by on the X axis
	//		posY: float value to change position by on the Y axis
	//		posZ: float value to change position by on the Z axis
	//----------------------------------------------------
	MATH_DLL void setPosition(float posX, float posY, float posZ);
	
	//----------------------------------------------------
	// Sets the scale of a matrix
	// param: 
	//		scaleX: float value to scale by on the X axis
	//		scaleY: float value to scale by on the Y axis
	//		scaleZ: float value to scale by on the Z axis
	//----------------------------------------------------
	MATH_DLL void setScale(float scaleX, float scaleY, float scaleZ);

	//----------------------------------------------------
	// returns the values for the position of the matrix
	// Return:
	//		Vector3: vector3 representing position of the matrix
	//
	//----------------------------------------------------
	MATH_DLL Vector3 getPosition();

	//----------------------------------------------------
	// returns the values for the scale of the matrix
	// Return:
	//		Vector3: vector3 representing Scale
	//
	//----------------------------------------------------
	MATH_DLL Vector3 getScale();
	
	//----------------------------------------------------
	// Sets the position of a matrix
	// param: 
	//		Vector3 rhs: Vector3 to be used to set x and y position values
	//----------------------------------------------------
	MATH_DLL void setPosition(const Vector3& rhs);

	MATH_DLL Matrix4 LookAt(Vector3 from, Vector3 to, Vector3 up);

	MATH_DLL Vector4 & operator[](const int rhs);
	MATH_DLL operator float*();
	float m[4][4];
};


