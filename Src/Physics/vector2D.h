#pragma once
#include <iostream>

class Vector2D
{
public:
	float X, Y;

public:
	Vector2D(float x=0, float y=0): X(x), Y(y) {};

public:

	inline Vector2D operator+(const Vector2D& v2) const
	{
		return Vector2D(X + v2.X, Y + v2.Y);
	}

	inline Vector2D operator-(const Vector2D& v2) const
	{
		return Vector2D(X - v2.X, Y - v2.Y);
	}

	inline Vector2D operator*(const float scalar) const
	{
		return Vector2D(X * scalar, Y * scalar);
	}
};

/*std::ostream& operator<<(std::ostream& out, const Vector2D& v)
{
	out << "[" << v.X << ", " << v.Y << "]";
	return out;
}*/
