#include <iostream> 
#include <string>
#include "Point.h"


// Mettre des <double> au lieu des <int>


using namespace std;

Point::Point() : m_posX(0), m_posY(0)
{
	//
}

Point::Point(float x, float y) : m_posX(x), m_posY(y)
{
	//
}

Point::Point(Point const& cible){
	// On peut aussi ecrire this->m_posX = cible.getX(); et this->m_posY() = cible.getY();
	m_posX = cible.getX();
	m_posY = cible.getY();
}

void Point::afficher() const{
	cout << "Point de coordonnées x = " << m_posX << " et y = " << m_posY;
}

float Point::getX() const{
	return m_posX;
}

float Point::getY() const{
	return m_posY;
}

void Point::setposX(float x){
	m_posX = x;
}

void Point::setposY(float y){
	m_posY = y;
}


