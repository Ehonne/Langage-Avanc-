#include <iostream>
#include <string.h>
#include "PointColor.h"

// Constructeurs :
PointColor::PointColor() : m_color("blanc") {
	//
}

PointColor::PointColor(float x, float y, std::string c) : Point(x, y), m_color(c){
	//
}

PointColor::PointColor(Point& p, std::string c) : Point(p), m_color(c){
	//
}

PointColor::~PointColor() {}

//Méthodes :
std::string PointColor::getColor() {
	return m_color;
}

void PointColor::setColor(std::string c){
	m_color = c;
}

void PointColor::afficher() {
	this->Point::afficher();
	std::cout << " / couleur : " << m_color << std::endl;
}
