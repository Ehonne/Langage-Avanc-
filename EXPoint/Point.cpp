#include <iostream> 
#include <string>
#include "Point.h"


using namespace std;

Point::Point() : m_posX(0), m_posY(0)
{
	//
}

Point::Point(int x, int y) : m_posX(x), m_posY(y)
{
	//
}

Point::Point(Point &cible){
	m_posX = cible.getX();
	m_posY = cible.getY();
}

void Point::afficher() const{
	cout << "Point de coordonnées x = " << m_posX << " et y = " << m_posY << endl;
}

int Point::getX() const{
	return m_posX;
}

int Point::getY() const{
	return m_posY;
}

void Point::setposX(int x){
	m_posX = x;
}

void Point::setposY(int y){
	m_posY = y;
}


