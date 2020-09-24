#include <iostream> 
#include <string>
#include "Segment.h"

using namespace std;


int main(){
	
	Point p1;
	Point p2(2, 5);
	Point p3(p2);
	
	p1.afficher();
	p2.afficher();
	p3.afficher();
	
	Segment S(p1, p2); 
	double l = S.longueur();
	cout << "Segment S de longueur : " << l << endl;
	
	S.affi();
	
	if (S.estSurDiagonale()) cout << "Le segment S est une diagonale" << endl;
	
	cout << endl;
	
	Point P1(2, 6), P2(2, 2);
	Segment S2(P1, P2);
	S2.affi();
	cout << "Segment S2 de longueur : " << S2.longueur() << endl;
	if (S2.estVertical()) cout << "le segment S2 est vertical" << endl;
	
	return 0;
}
