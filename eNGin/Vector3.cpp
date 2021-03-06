#include <math.h>

#include "Vector3.h"

Vector3::Vector3() : x(0),
					 y(0),
					 z(0)
{

}

Vector3::Vector3(GLdouble posX, GLdouble posY, GLdouble posZ) : x(posX),
																y(posY),
																z(posZ)
{

}

void Vector3::SetPointX(GLdouble posX) {
	x = posX;
}

void Vector3::SetPointY(GLdouble posY) {
	y = posY;
}

void Vector3::SetPointZ(GLdouble posZ) {
	z = posZ;
}

GLdouble Vector3::GetPointX() {
	return x;
}

GLdouble Vector3::GetPointY() {
	return y;
}

GLdouble Vector3::GetPointZ() {
	return z;
}

GLdouble Vector3::MagnitudeOfVector() {
	return sqrt((x * x + y * y + z * z));
}

GLdouble Vector3::DotProduct(Vector3 &in) {
	return x * in.x + y * in.y + z * in.z;
}

Vector3 Vector3::CrossProduct(Vector3 &in) {
	Vector3 tempVec(y * in.z - z * in.y,
					x * in.z - z * in.x,
					x * in.y - y * in.x);

	return tempVec;
}

Vector3 Vector3::MultiplyByScalar(GLdouble scalar) {
	Vector3 tempVec(x * scalar,
					y * scalar,
					z * scalar);

	return tempVec;
}

Vector3 Vector3::UnitNormal() {
	GLdouble mag = MagnitudeOfVector();
	Vector3 tempVec(x / mag,
					y / mag,
					z / mag);

	return tempVec;
}
