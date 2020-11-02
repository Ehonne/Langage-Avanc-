#ifndef DEF_POINT
#define DEF_POINT


#include <iostream> 
#include <string>

class Point{
	protected:
	float m_posX;
	float m_posY;
	
	public:
	Point();
	Point(float x, float y);
	Point(Point const& cible);
	
	// rajouter une méthode void cloner(Point& p);
	void afficher() const;
	void setposX(float x);
	void setposY(float y);
	float getX() const;
	float getY() const;
	
};
#endif
