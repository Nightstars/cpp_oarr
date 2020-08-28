#include "Coordinate.h"

Coordinate::Coordinate()
{
	cout << "Coordinate::Coordinate()" << endl;
}

Coordinate::~Coordinate()
{
	cout << "Coordinate::~Coordinate()" << endl;
}

void Coordinate::setX(int _x)
{
	m_iX = _x;
}

int Coordinate::getX()
{
	return m_iX;
}

void Coordinate::setY(int _y)
{
	m_iY = _y;
}

int Coordinate::getY()
{
	return m_iY;
}
