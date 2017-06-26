#pragma once

#ifdef STATIC_LIB //using static library
#define MATH_DLL
#else // using dynamic library

#ifdef DLL_EXPORT // we are exporting
#define MATH_DLL __declspec(dllexport)
#else // we are importing
#define MATH_DLL __declspec(dllimport)
#endif
#endif


#include "Vector2.h"
class Matrix2
{
public:
	//----------------------------------------------------
	// Default constructor
	// initialises identity 2x2 matrix for matrix2
	//----------------------------------------------------
	MATH_DLL Matrix2();

	//----------------------------------------------------
	// Initalises 2x2 matrix with xy values
	// Param:
	//		Float values for each locations in the 2x2 array
	//----------------------------------------------------
	MATH_DLL Matrix2(float xx, float xy, float yy, float yx);

	//----------------------------------------------------
	// Default destructor
	//----------------------------------------------------
	MATH_DLL ~Matrix2();

	//----------------------------------------------------
	// Multiplies 2x2 matrix by vector2
	// param:
	//		Vector2: Takes in a vector2 rhs 
	// return:
	//		Returns Vector2 result
	//
	//----------------------------------------------------
	MATH_DLL Vector2 operator*(const Vector2& rhs);

	//----------------------------------------------------
	// Multiples 2x2 matrix by 2x2 matrix 
	// param:
	//		Matrix2 rhs: Takes in a 2x2 matrix
	//
	// return:	
	//		Returns matrix2 result as 2x2 matrix
	//
	//----------------------------------------------------
	MATH_DLL Matrix2 operator*(const Matrix2& rhs);

	//----------------------------------------------------
	// Rotates 2x2 matrix by a given radian
	// param: 
	//		a: radian in which to rotate by
	//
	//----------------------------------------------------
	MATH_DLL void setRotate(const float a);

	//----------------------------------------------------
	// converts degrees into radians
	// rotates 2x2 matrix by radians
	// param: 
	//		a: angle in which to rotate by in degrees
	//
	//----------------------------------------------------
	MATH_DLL void DegreeSetRotate(const float d);

	

	MATH_DLL Vector2& operator[](const int rhs);
	MATH_DLL operator float*();
	float m[2][2];

	//----------------------------------------------------
	// Converts radians to degrees
	// param: 
	//		Rad: takes in a radian
	//
	//----------------------------------------------------
	MATH_DLL float RadToDegree(float Rad);

	//----------------------------------------------------
	// Converts degrees to radians
	// param: 
	//		degree: Takes in a degree
	//
	//----------------------------------------------------
	MATH_DLL float DegreeToRad(float Degree);

};

