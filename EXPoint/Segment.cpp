#include <iostream>
#include <string>
#include <cmath>
#include "Segment.h"

using namespace std;

Segment::Segment(Point p1, Point p2) : A(p1), B(p2)
{
	
}

Segment::Segment(int x1, int y1, int x2, int y2){
	A.setposX(x1);
	A.setposY(y1);
	B.setposX(x2);
	B.setposY(y2);
}

Segment::Segment(Segment &cible){
	A = cible.getpoint1();
	B = cible.getpoint2();
}

Point Segment::getpoint1(){
	return A;
}

Point Segment::getpoint2(){
	return B;
}

double Segment::longueur(){
	return sqrt(pow((B.getX()-A.getX()), 2) + pow((B.getY() - A.getY()), 2));
}


void Segment::affi() const{
	cout << "Segment S de points : " << endl;
	cout << "A, ";
	A.afficher();
	cout << "B, ";
	B.afficher();
}

// remplir les fonctions manquantes :


bool Segment::estVertical() const{
	if(A.getX() == B.getX()) return true;
	else return false;
}

bool Segment::estHorizontal() const{
	if(A.getY() == B.getY()) return true;
	else return false;
}


bool Segment::estSurDiagonale() const{
	if ((A.getX() != B.getX()) && (A.getY() != B.getY())) return true;
	else return false;
}





