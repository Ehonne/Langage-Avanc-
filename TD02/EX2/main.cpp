#include <iostream>
#include "Vecteur.h"

using namespace std;

int main(){
	
	Vecteur V1(3), V2;
	
	cout << "V1 : ";
	V1.afficherTab();
	cout << "V2 : ";
	V2.afficherTab();
	
	
	Vecteur V3(V1);
	cout << "V3 : ";
	V3.afficherTab();
	

	
	
	return 0;
}
