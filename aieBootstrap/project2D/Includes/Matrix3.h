#pragma once
#include "Vector3.h"
#include "Vector2.h"

#ifdef STATIC_LIB //using static library
#define MATH_DLL
#else // using dynamic library

#ifdef DLL_EXPORT // we are exporting
#define MATH_DLL __declspec(dllexport)
#else // we are importing
#define MATH_DLL __declspec(dllimport)
#endif
#endif


class Matrix3
{
public:
	//----------------------------------------------------
	// Default constructor
	// initialises identity matrix for matrix 3
	//----------------------------------------------------
	MATH_DLL Matrix3();

	//----------------------------------------------------
	// Initalises matrix with xyz values
	// Param:
	//		Float values for each locations in the 3x3 array
	//----------------------------------------------------
	MATH_DLL Matrix3(float xx, float xy, float xz, float yy, float yx, float yz, float zz, float zx, float zy);
	
	//----------------------------------------------------
	// Default destructor
	//----------------------------------------------------
	MATH_DLL ~Matrix3();

	//----------------------------------------------------
	// Multiplies 3x3 matrix by vector3
	// param:
	//		Vector3: Takes in a vector3 rhs 
	// return:
	//		Returns Vector3 result
	//
	//----------------------------------------------------
	MATH_DLL Vector3 operator*(const Vector3 & rhs);

	//----------------------------------------------------
	// Multiples 3x3 matrix by 3x3 matrix 
	// param:
	//		Matrix3 rhs: Takes in a 3x3 matrix
	//
	// return:	
	//		Returns matrix3 result as 3x3 matrix
	//
	//----------------------------------------------------
	MATH_DLL Matrix3 operator*(const Matrix3 & rhs);

	//----------------------------------------------------
	// Rotates 3x3 matrix by given angle on X axis
	// param: 
	//		a: angle in which to rotate by in radians
	//
	//----------------------------------------------------
	MATH_DLL void setRotateX(const float a);
	
	//----------------------------------------------------
	// Rotates 3x3 matrix by given angle on y axis
	// param: 
	//		a: angle in which to rotate by in radians
	//
	//----------------------------------------------------
	MATH_DLL void setRotateY(const float a);
	
	//----------------------------------------------------
	// Rotates 3x3 matrix by given angle on z axis
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
	// Sets the scale of a matrix
	// param: 
	//		scaleX: float value to scale by on the X axis
	//		scaleY: float value to scale by on the Y axis
	//		scaleZ: float value to scale by on the Z axis
	//----------------------------------------------------
	MATH_DLL void setScale(float scaleX, float scaleY, float scaleZ);

	//----------------------------------------------------
	// returns the values for the scale of the matrix
	// Return:
	//		Vector2: vector2 representing Scale
	//
	//----------------------------------------------------
	MATH_DLL Vector2 getScale();
	
	//----------------------------------------------------
	// returns the values for the position of the matrix
	// Return:
	//		Vector2: vector2 representing position of the matrix
	//
	//----------------------------------------------------
	MATH_DLL Vector2 getPosition();

	//----------------------------------------------------
	// Sets the Position of a matrix
	// param: 
	//		posX: float value to change position by on the X axis
	//		posY: float value to change position by on the Y axis
	//----------------------------------------------------
	MATH_DLL void setPosition(float posX, float posY);

	//----------------------------------------------------
	// Sets the position of a matrix
	// param: 
	//		Vector2 rhs: Vector2 to be used to set x and y position values
	//----------------------------------------------------
	MATH_DLL void setPosition(const Vector2& rhs);

	//----------------------------------------------------
	// Converts radians to degrees
	// param: 
	//		Rad: takes in a radian
	//
	//----------------------------------------------------
	MATH_DLL float Matrix3::RadToDegree(float Rad);

	//----------------------------------------------------
	// Converts degrees to radians
	// param: 
	//		degree: Takes in a degree
	//
	//----------------------------------------------------
	MATH_DLL float DegreeToRad(float Degree);

	MATH_DLL Vector3 & operator[](const int rhs);
	MATH_DLL operator float*();
	float m[3][3];
};

