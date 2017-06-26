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

class Vector4
{
public:
	//----------------------------------------------------
	// Default constructor
	// Initialises basic Vector 2 with x and y and z and w floats
	//----------------------------------------------------
	MATH_DLL Vector4();

	//----------------------------------------------------
	// default constructor
	// param: 
	//		floats: Takes in floats for x, y, z and w values
	//
	//----------------------------------------------------
	MATH_DLL Vector4(float newX, float newY, float newZ, float newW);

	//----------------------------------------------------
	// Default destructor
	//----------------------------------------------------
	MATH_DLL ~Vector4();

	//----------------------------------------------------
	// Overloads + operator
	// Adds 2 vector4's together
	// param: 
	//		Vector4: Vector4 holding a x, y and z and w values
	// return:
	//		Result: Returns the result of the sum as Vector
	//----------------------------------------------------
	MATH_DLL Vector4 operator+(const Vector4 & rhs);

	//----------------------------------------------------
	// Overloads - operator
	// subtracts 2 vector4's together
	// param: 
	//		Vector4: Vector4 holding a x, y and z and w values
	// return:
	//		Result: Returns the result of the sum as Vector
	//----------------------------------------------------
	MATH_DLL Vector4 operator-(const Vector4 & rhs);

	//----------------------------------------------------
	// Overloads * operator
	// multiplies 2 vector4's together
	// param: 
	//		Vector4: Vector4 holding a x, y and z and w values
	// return:
	//		Result: Returns the result of the sum as Vector
	//----------------------------------------------------
	MATH_DLL Vector4 operator*(float rhs);
	MATH_DLL Vector4 posOperator();

	//----------------------------------------------------
	// Operator overload for negative sign
	// Makes Vector2 negative
	// return:
	//		Returns float result, which is the maginitude
	//----------------------------------------------------
	MATH_DLL Vector4 operator-();

	//----------------------------------------------------
	// operator overload for / sign
	// param:
	//		Vector4: Vector4 rhs with x and y and z values
	// return:
	//		returns x and y and z values for rhs
	//----------------------------------------------------
	MATH_DLL Vector4 operator/(const float rhs);

	MATH_DLL Vector4 operator/(const Vector4 & rhs);

	//----------------------------------------------------
	// operator overload for += sign
	// param:
	//		Vector4: Vector4 rhs with x and y values
	// return:
	//		returns x and y values for rhs
	//----------------------------------------------------
	MATH_DLL Vector4 operator+=(const Vector4 & rhs);


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
	// Dot product 
	// param: 
	//		Vector4: Vector4 holding a x and y and z and w values
	// return:
	//		Result: Returns the result of the sum as float
	//----------------------------------------------------
	MATH_DLL float dot(Vector4 rhs);

	//----------------------------------------------------
	// Cross product 
	// param: 
	//		Vector4: Vector4 holding a x and y and z and w values
	// return:
	//		Result: Returns the result of the sum as float
	//----------------------------------------------------
	MATH_DLL Vector4 cross(Vector4 rhs);

	//----------------------------------------------------
	// Finds the distance between to vectors
	// Params:
	//		Vector4 rhs: Takes in a vector4
	//
	// Return:
	//		Float: Returns a float value of the distance between 2 vectors
	//----------------------------------------------------
	MATH_DLL float distance(Vector4 rhs);

	//----------------------------------------------------
	// Swizzles the values of a premade vector4 
	// returns a vector4 with those new values
	//
	// Return:
	//		Vector4: Returns a vector4 with swizzled values
	//----------------------------------------------------
	// Start of Swizzles
	//----------------------------------------------------
	MATH_DLL Vector4    xxxx();
	MATH_DLL Vector4	xxxy();
	MATH_DLL Vector4	xxxz();
	MATH_DLL Vector4	xxxw();
	MATH_DLL Vector4	xxyx();
	MATH_DLL Vector4	xxyy();
	MATH_DLL Vector4	xxyz();
	MATH_DLL Vector4	xxyw();
	MATH_DLL Vector4	xxzx();
	MATH_DLL Vector4	xxzy();
	MATH_DLL Vector4	xxzz();
	MATH_DLL Vector4	xxzw();
	MATH_DLL Vector4	xxwx();
	MATH_DLL Vector4	xxwy();
	MATH_DLL Vector4	xxwz();
	MATH_DLL Vector4	xxww();
	MATH_DLL Vector4	xyxx();
	MATH_DLL Vector4	xyxy();
	MATH_DLL Vector4	xyxz();
	MATH_DLL Vector4	xyxw();
	MATH_DLL Vector4	xyyx();
	MATH_DLL Vector4	xyyy();
	MATH_DLL Vector4	xyyz();
	MATH_DLL Vector4	xyyw();
	MATH_DLL Vector4	xyzx();
	MATH_DLL Vector4	xyzy();
	MATH_DLL Vector4	xyzz();
	MATH_DLL Vector4	xyzw();
	MATH_DLL Vector4	xywx();
	MATH_DLL Vector4	xywy();
	MATH_DLL Vector4	xywz();
	MATH_DLL Vector4	xyww();
	MATH_DLL Vector4	xzxx();
	MATH_DLL Vector4	xzxy();
	MATH_DLL Vector4	xzxz();
	MATH_DLL Vector4	xzxw();
	MATH_DLL Vector4	xzyx();
	MATH_DLL Vector4	xzyy();
	MATH_DLL Vector4	xzyz();
	MATH_DLL Vector4	xzyw();
	MATH_DLL Vector4	xzzx();
	MATH_DLL Vector4	xzzy();
	MATH_DLL Vector4	xzzz();
	MATH_DLL Vector4	xzzw();
	MATH_DLL Vector4	xzwx();
	MATH_DLL Vector4	xzwy();
	MATH_DLL Vector4	xzwz();
	MATH_DLL Vector4	xzww();
	MATH_DLL Vector4	xwxx();
	MATH_DLL Vector4	xwxy();
	MATH_DLL Vector4	xwxz();
	MATH_DLL Vector4	xwxw();
	MATH_DLL Vector4	xwyx();
	MATH_DLL Vector4	xwyy();
	MATH_DLL Vector4	xwyz();
	MATH_DLL Vector4	xwyw();
	MATH_DLL Vector4	xwzx();
	MATH_DLL Vector4	xwzy();
	MATH_DLL Vector4	xwzz();
	MATH_DLL Vector4	xwzw();
	MATH_DLL Vector4	xwwx();
	MATH_DLL Vector4	xwwy();
	MATH_DLL Vector4	xwwz();
	MATH_DLL Vector4	xwww();
	MATH_DLL Vector4	yxxx();
	MATH_DLL Vector4	yxxy();
	MATH_DLL Vector4	yxxz();
	MATH_DLL Vector4	yxxw();
	MATH_DLL Vector4	yxyx();
	MATH_DLL Vector4	yxyy();
	MATH_DLL Vector4	yxyz();
	MATH_DLL Vector4	yxyw();
	MATH_DLL Vector4	yxzx();
	MATH_DLL Vector4	yxzy();
	MATH_DLL Vector4	yxzz();
	MATH_DLL Vector4	yxzw();
	MATH_DLL Vector4	yxwx();
	MATH_DLL Vector4	yxwy();
	MATH_DLL Vector4	yxwz();
	MATH_DLL Vector4	yxww();
	MATH_DLL Vector4	yyxx();
	MATH_DLL Vector4	yyxy();
	MATH_DLL Vector4	yyxz();
	MATH_DLL Vector4	yyxw();
	MATH_DLL Vector4	yyyx();
	MATH_DLL Vector4	yyyy();
	MATH_DLL Vector4	yyyz();
	MATH_DLL Vector4	yyyw();
	MATH_DLL Vector4	yyzx();
	MATH_DLL Vector4	yyzy();
	MATH_DLL Vector4	yyzz();
	MATH_DLL Vector4	yyzw();
	MATH_DLL Vector4	yywx();
	MATH_DLL Vector4	yywy();
	MATH_DLL Vector4	yywz();
	MATH_DLL Vector4	yyww();
	MATH_DLL Vector4	yzxx();
	MATH_DLL Vector4	yzxy();
	MATH_DLL Vector4	yzxz();
	MATH_DLL Vector4	yzxw();
	MATH_DLL Vector4	yzyx();
	MATH_DLL Vector4	yzyy();
	MATH_DLL Vector4	yzyz();
	MATH_DLL Vector4	yzyw();
	MATH_DLL Vector4	yzzx();
	MATH_DLL Vector4	yzzy();
	MATH_DLL Vector4	yzzz();
	MATH_DLL Vector4	yzzw();
	MATH_DLL Vector4	yzwx();
	MATH_DLL Vector4	yzwy();
	MATH_DLL Vector4	yzwz();
	MATH_DLL Vector4	yzww();
	MATH_DLL Vector4	ywxx();
	MATH_DLL Vector4	ywxy();
	MATH_DLL Vector4	ywxz();
	MATH_DLL Vector4	ywxw();
	MATH_DLL Vector4	ywyx();
	MATH_DLL Vector4	ywyy();
	MATH_DLL Vector4	ywyz();
	MATH_DLL Vector4	ywyw();
	MATH_DLL Vector4	ywzx();
	MATH_DLL Vector4	ywzy();
	MATH_DLL Vector4	ywzz();
	MATH_DLL Vector4	ywzw();
	MATH_DLL Vector4	ywwx();
	MATH_DLL Vector4	ywwy();
	MATH_DLL Vector4	ywwz();
	MATH_DLL Vector4	ywww();
	MATH_DLL Vector4	zxxx();
	MATH_DLL Vector4	zxxy();
	MATH_DLL Vector4	zxxz();
	MATH_DLL Vector4	zxxw();
	MATH_DLL Vector4	zxyx();
	MATH_DLL Vector4	zxyy();
	MATH_DLL Vector4	zxyz();
	MATH_DLL Vector4	zxyw();
	MATH_DLL Vector4	zxzx();
	MATH_DLL Vector4	zxzy();
	MATH_DLL Vector4	zxzz();
	MATH_DLL Vector4	zxzw();
	MATH_DLL Vector4	zxwx();
	MATH_DLL Vector4	zxwy();
	MATH_DLL Vector4	zxwz();
	MATH_DLL Vector4	zxww();
	MATH_DLL Vector4	zyxx();
	MATH_DLL Vector4	zyxy();
	MATH_DLL Vector4	zyxz();
	MATH_DLL Vector4	zyxw();
	MATH_DLL Vector4	zyyx();
	MATH_DLL Vector4	zyyy();
	MATH_DLL Vector4	zyyz();
	MATH_DLL Vector4	zyyw();
	MATH_DLL Vector4	zyzx();
	MATH_DLL Vector4	zyzy();
	MATH_DLL Vector4	zyzz();
	MATH_DLL Vector4	zyzw();
	MATH_DLL Vector4	zywx();
	MATH_DLL Vector4	zywy();
	MATH_DLL Vector4	zywz();
	MATH_DLL Vector4	zyww();
	MATH_DLL Vector4	zzxx();
	MATH_DLL Vector4	zzxy();
	MATH_DLL Vector4	zzxz();
	MATH_DLL Vector4	zzxw();
	MATH_DLL Vector4	zzyx();
	MATH_DLL Vector4	zzyy();
	MATH_DLL Vector4	zzyz();
	MATH_DLL Vector4	zzyw();
	MATH_DLL Vector4	zzzx();
	MATH_DLL Vector4	zzzy();
	MATH_DLL Vector4	zzzz();
	MATH_DLL Vector4	zzzw();
	MATH_DLL Vector4	zzwx();
	MATH_DLL Vector4	zzwy();
	MATH_DLL Vector4	zzwz();
	MATH_DLL Vector4	zzww();
	MATH_DLL Vector4	zwxx();
	MATH_DLL Vector4	zwxy();
	MATH_DLL Vector4	zwxz();
	MATH_DLL Vector4	zwxw();
	MATH_DLL Vector4	zwyx();
	MATH_DLL Vector4	zwyy();
	MATH_DLL Vector4	zwyz();
	MATH_DLL Vector4	zwyw();
	MATH_DLL Vector4	zwzx();
	MATH_DLL Vector4	zwzy();
	MATH_DLL Vector4	zwzz();
	MATH_DLL Vector4	zwzw();
	MATH_DLL Vector4	zwwx();
	MATH_DLL Vector4	zwwy();
	MATH_DLL Vector4	zwwz();
	MATH_DLL Vector4	zwww();
	MATH_DLL Vector4	wxxx();
	MATH_DLL Vector4	wxxy();
	MATH_DLL Vector4	wxxz();
	MATH_DLL Vector4	wxxw();
	MATH_DLL Vector4	wxyx();
	MATH_DLL Vector4	wxyy();
	MATH_DLL Vector4	wxyz();
	MATH_DLL Vector4	wxyw();
	MATH_DLL Vector4	wxzx();
	MATH_DLL Vector4	wxzy();
	MATH_DLL Vector4	wxzz();
	MATH_DLL Vector4	wxzw();
	MATH_DLL Vector4	wxwx();
	MATH_DLL Vector4	wxwy();
	MATH_DLL Vector4	wxwz();
	MATH_DLL Vector4	wxww();
	MATH_DLL Vector4	wyxx();
	MATH_DLL Vector4	wyxy();
	MATH_DLL Vector4	wyxz();
	MATH_DLL Vector4	wyxw();
	MATH_DLL Vector4	wyyx();
	MATH_DLL Vector4	wyyy();
	MATH_DLL Vector4	wyyz();
	MATH_DLL Vector4	wyyw();
	MATH_DLL Vector4	wyzx();
	MATH_DLL Vector4	wyzy();
	MATH_DLL Vector4	wyzz();
	MATH_DLL Vector4	wyzw();
	MATH_DLL Vector4	wywx();
	MATH_DLL Vector4	wywy();
	MATH_DLL Vector4	wywz();
	MATH_DLL Vector4	wyww();
	MATH_DLL Vector4	wzxx();
	MATH_DLL Vector4	wzxy();
	MATH_DLL Vector4	wzxz();
	MATH_DLL Vector4	wzxw();
	MATH_DLL Vector4	wzyx();
	MATH_DLL Vector4	wzyy();
	MATH_DLL Vector4	wzyz();
	MATH_DLL Vector4	wzyw();
	MATH_DLL Vector4	wzzx();
	MATH_DLL Vector4	wzzy();
	MATH_DLL Vector4	wzzz();
	MATH_DLL Vector4	wzzw();
	MATH_DLL Vector4	wzwx();
	MATH_DLL Vector4	wzwy();
	MATH_DLL Vector4	wzwz();
	MATH_DLL Vector4	wzww();
	MATH_DLL Vector4	wwxx();
	MATH_DLL Vector4	wwxy();
	MATH_DLL Vector4	wwxz();
	MATH_DLL Vector4	wwxw();
	MATH_DLL Vector4	wwyx();
	MATH_DLL Vector4	wwyy();
	MATH_DLL Vector4	wwyz();
	MATH_DLL Vector4	wwyw();
	MATH_DLL Vector4	wwzx();
	MATH_DLL Vector4	wwzy();
	MATH_DLL Vector4	wwzz();
	MATH_DLL Vector4	wwzw();
	MATH_DLL Vector4	wwwx();
	MATH_DLL Vector4	wwwy();
	MATH_DLL Vector4	wwwz();
	MATH_DLL Vector4	wwww();
	//----------------------------------------------------
	// End of Swizzles
	//----------------------------------------------------



	float x;
	float y;
	float z;
	float w;
};
//----------------------------------------------------
// Overloads * operator
// Multiplies float by Vector4
// param: 
//		Vector4: Vector4 holding a x and y and w value
// return:
//		Result: Returns the result of the sum as Vector
//----------------------------------------------------
MATH_DLL Vector4 operator*(float lhs, const Vector4 rhs);
