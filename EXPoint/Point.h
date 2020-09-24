#ifndef DEF_POINT
#define DEF_POINT


#include <iostream> 
#include <string>

class Point{
	private:
	int m_posX;
	int m_posY;
	
	public:
	Point();
	Point(int x, int y);
	Point(Point &cible);
	
	void afficher() const;
	void setposX(int x);
	void setposY(int y);
	int getX() const;
	int getY() const;
	
};
#endif
