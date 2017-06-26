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




class Vector3
{
public:
	//----------------------------------------------------
	// Default constructor
	// Initialises basic Vector 2 with x and y and z floats
	//----------------------------------------------------
	MATH_DLL Vector3();

	//----------------------------------------------------
	// default constructor
	// param: 
	//		floats: Takes in floats for x, y and z values
	//
	//----------------------------------------------------
	MATH_DLL Vector3(float newX, float newY, float newZ);
	
	//----------------------------------------------------
	// Default destructor
	//----------------------------------------------------
	MATH_DLL ~Vector3();

	//----------------------------------------------------
	// Overloads + operator
	// Adds 2 vector3's together
	// param: 
	//		Vector3: Vector3 holding a x, y and z values
	// return:
	//		Result: Returns the result of the sum as Vector
	//----------------------------------------------------
	MATH_DLL Vector3 operator+(const Vector3& rhs);

	//----------------------------------------------------
	// Overloads - operator
	// Subtracts 2 vector3's together
	// param: 
	//		Vector3: Vector3 holding a x, y and z value
	// return:
	//		Result: Returns the result of the sum as Vector
	//----------------------------------------------------
	MATH_DLL Vector3 operator-(const Vector3 & rhs);

	//----------------------------------------------------
	// Overloads * operator
	// Multiplies 2 vector3's together
	// param: 
	//		Vector3: Vector3 holding a x, y and z value
	// return:
	//		Result: Returns the result of the sum as Vector
	//----------------------------------------------------
	MATH_DLL Vector3 operator*(const float rhs);
	MATH_DLL Vector3 posOperator();

	//----------------------------------------------------
	// Operator overload for negative sign
	// Makes Vector2 negative
	// return:
	//		Returns float result, which is the maginitude
	//----------------------------------------------------
	MATH_DLL Vector3 operator-();

	//----------------------------------------------------
	// operator overload for / sign
	// param:
	//		Vector3: Vector3 rhs with x and y and z values
	// return:
	//		returns x and y and z values for rhs
	//----------------------------------------------------
	MATH_DLL Vector3 operator/(const float rhs);
	MATH_DLL Vector3 operator/(const Vector3& rhs);
	//----------------------------------------------------
	// operator overload for += sign
	// param:
	//		Vector3: Vector3 rhs with x and y values
	// return:
	//		returns x and y values for rhs
	//----------------------------------------------------
	MATH_DLL Vector3 operator+=(const Vector3 & rhs);
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
	MATH_DLL Vector3 normalised(Vector3 data);

	//----------------------------------------------------
	// Dot product 
	// param: 
	//		Vector3: Vector3 holding a x and y and z values
	// return:
	//		Result: Returns the result of the sum as float
	//----------------------------------------------------
	MATH_DLL float dot(Vector3 rhs);

	//----------------------------------------------------
	// Cross product 
	// param: 
	//		Vector3: Vector3 holding a x and y and z values
	// return:
	//		Result: Returns the result of the sum as float
	//----------------------------------------------------
	MATH_DLL Vector3 cross(Vector3 rhs);

	//----------------------------------------------------
	// Finds the distance between to vectors
	// Params:
	//		Vector3 rhs: Takes in a vector3
	//
	// Return:
	//		Float: Returns a float value of the distance between 2 vectors
	//----------------------------------------------------
	MATH_DLL float distance(Vector3 rhs);

	//----------------------------------------------------
	// Swizzles the values of a premade vector3 
	// returns a vector3 with those new values
	//
	// Return:
	//		Vector3: Returns a vector3 with swizzled values
	//----------------------------------------------------
	// Start of Swizzles
	//----------------------------------------------------
	MATH_DLL Vector3	xxx();
	MATH_DLL Vector3	xxy();
	MATH_DLL Vector3	xxz();
	MATH_DLL Vector3	xyx();
	MATH_DLL Vector3	xyy();
	MATH_DLL Vector3	xyz();
	MATH_DLL Vector3	xzx();
	MATH_DLL Vector3	xzy();
	MATH_DLL Vector3	xzz();
	MATH_DLL Vector3	yxx();
	MATH_DLL Vector3	yxy();
	MATH_DLL Vector3	yxz();
	MATH_DLL Vector3	yyx();
	MATH_DLL Vector3	yyy();
	MATH_DLL Vector3	yyz();
	MATH_DLL Vector3	yzx();
	MATH_DLL Vector3	yzy();
	MATH_DLL Vector3	yzz();
	MATH_DLL Vector3	zxx();
	MATH_DLL Vector3	zxy();
	MATH_DLL Vector3	zxz();
	MATH_DLL Vector3	zyx();
	MATH_DLL Vector3	zyy();
	MATH_DLL Vector3	zyz();
	MATH_DLL Vector3	zzx();
	MATH_DLL Vector3	zzy();
	MATH_DLL Vector3	zzz();
	//----------------------------------------------------
	// End of Swizzles
	//----------------------------------------------------



	float x;
	float y;
	float z;
};
//----------------------------------------------------
// Overloads * operator
// Multiplies float by Vector3
// param: 
//		Vector3: Vector3 holding a x and y value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
MATH_DLL Vector3 operator*(float lhs, const Vector3 rhs);


 