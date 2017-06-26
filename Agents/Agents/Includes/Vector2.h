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

class Vector2
{
public:
	//----------------------------------------------------
	// Default constructor
	// Initialises basic Vector 2 with x and y floats
	//----------------------------------------------------
	MATH_DLL Vector2();

	//----------------------------------------------------
	// default constructor
	// param: 
	//		floats: Takes in floats for x and y values
	//
	//----------------------------------------------------
	MATH_DLL Vector2(float newX , float newY);
	
	//----------------------------------------------------
	// Default destructor
	//----------------------------------------------------
	MATH_DLL ~Vector2();

	//----------------------------------------------------
	// Overloads + operator
	// Adds 2 vector2's together
	// param: 
	//		Vector2: Vector2 holding a x and y value
	// return:
	//		Result: Returns the result of the sum as Vector
	//----------------------------------------------------
	MATH_DLL Vector2 operator+(const Vector2& rhs);
	
	//----------------------------------------------------
	// Overloads - operator
	// Subtracts 2 vector2's together
	// param: 
	//		Vector2: Vector2 holding a x and y value
	// return:
	//		Result: Returns the result of the sum as Vector
	//----------------------------------------------------
	MATH_DLL Vector2 operator-(const Vector2 & rhs);
	
	//----------------------------------------------------
	// Overloads * operator
	// Multiplies 2 vector2's together
	// param: 
	//		Vector2: Vector2 holding a x and y value
	// return:
	//		Result: Returns the result of the sum as Vector
	//----------------------------------------------------
	MATH_DLL Vector2 operator*(const float rhs);
	
	
	//----------------------------------------------------
	// Overloads / operator
	// Divides 2 vector2's together
	// param: 
	//		Vector2: Vector2 holding a x and y value
	// return:
	//		Result: Returns the result as Vector
	//----------------------------------------------------
	MATH_DLL Vector2 operator/(const float rhs);
	MATH_DLL Vector2 operator/(const Vector2 & rhs);
	MATH_DLL Vector2 posOperator();

	//----------------------------------------------------
	// Operator overload for negative sign
	// Makes Vector2 negative
	// return:
	//		Returns float result, which is the maginitude
	//----------------------------------------------------
	MATH_DLL Vector2 operator-();

	//----------------------------------------------------
	// operator overload for += sign
	// param:
	//		Vector2: Vector2 rhs with x and y values
	// return:
	//		returns x and y values for rhs
	//----------------------------------------------------
	MATH_DLL Vector2 operator+=(const Vector2& rhs);
	MATH_DLL float & operator[](const int rhs);
	MATH_DLL operator float*();


	//----------------------------------------------------
	// gets magnitude of float
	// return:
	//		Returns float result, which is the maginitude
	//----------------------------------------------------
	MATH_DLL float magnitude();

	//----------------------------------------------------
	// Normalises a float to values in ratio of 1
	//----------------------------------------------------
	MATH_DLL void normalise();

	//----------------------------------------------------
	// normalised float value
	// return:
	//		Returns float result
	//----------------------------------------------------
	MATH_DLL Vector2 normalised(Vector2 data);

	//----------------------------------------------------
	// Dot product 
	// param: 
	//		Vector2: Vector2 holding a x and y value
	// return:
	//		Result: Returns the result of the sum as float
	//----------------------------------------------------
	MATH_DLL float dot(Vector2 rhs);
	
	//----------------------------------------------------
	// Swizzles the values of a premade vector2 and returns a vector2 with those new values
	//
	// Return:
	//		Vector2: Returns a vector2 with swizzled values
	//----------------------------------------------------
	// Start of Swizzles
	//----------------------------------------------------
	MATH_DLL Vector2 xx();
	MATH_DLL Vector2 yx();
	MATH_DLL Vector2 yy();
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
	MATH_DLL float distance(Vector2 rhs);
	
	float x;
	float y;	
};
//----------------------------------------------------
// Overloads * operator
// Multiplies float by Vector2
// param: 
//		Vector2: Vector2 holding a x and y value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
MATH_DLL Vector2 operator*(float lhs, const Vector2 rhs);


