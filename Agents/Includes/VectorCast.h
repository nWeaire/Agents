#pragma once
#include "Vector2.h"
#include "Vector3.h"
#include "Vector4.h"

#ifdef STATIC_LIB //using static library
#define MATH_DLL
#else // using dynamic library

#ifdef DLL_EXPORT // we are exporting
#define MATH_DLL __declspec(dllexport)
#else // we are importing
#define MATH_DLL __declspec(dllimport)
#endif
#endif

	template <class D, class S>
	D CastTo(S source) {};

	template <>
	MATH_DLL Vector3 CastTo(Vector2 source)
	{
		Vector3 result;
		result.x = source.x;
		result.y = source.y;
		return result;
	};
	template <>
	MATH_DLL Vector4 CastTo(Vector2 source)
	{
		Vector4 result;
		result.x = source.x;
		result.y = source.y;
		return result;
	};
	template <>
	MATH_DLL Vector4 CastTo(Vector3 source)
	{
		Vector4 result;
		result.x = source.x;
		result.y = source.y;
		result.z = source.z;
		return result;
	};

	template <>
	MATH_DLL Vector2 CastTo(Vector3 source)
	{
		Vector2 result;
		result.x = source.x;
		result.y = source.y;
		return result;
	};
	template <>
	MATH_DLL Vector2 CastTo(Vector4 source)
	{
		Vector2 result;
		result.x = source.x;
		result.y = source.y;
		return result;
	};
	template <>
	MATH_DLL Vector3 CastTo(Vector4 source)
	{
		Vector3 result;
		result.x = source.x;
		result.y = source.y;
		result.z = source.z;
		return result;
	};


