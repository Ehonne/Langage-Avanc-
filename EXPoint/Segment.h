#ifndef DEF_SEGMENT
#define DEF_SEGMENT

#include <iostream>
#include "Point.h"

class Segment{
	
	private:
	Point A;
	Point B;
	
	
	public:
	Segment(Point p1, Point p2);
	Segment(int x1, int y1, int x2, int y2);
	Segment(Segment &cible);
	
	
	Point getpoint1();
	Point getpoint2();
	double longueur();
	void affi() const;
	bool estVertical() const;
	bool estHorizontal() const;
	bool estSurDiagonale() const;
	
	
};


#endif
