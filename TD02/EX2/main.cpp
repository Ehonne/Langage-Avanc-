#include <iostream>
#include "Vecteur.h"

using namespace std;

int main(){
	
	Vecteur V1(3), V2;
	
	cout << "V1 : ";
	V1.afficherTab();
	cout << "V2 : ";
	V2.afficherTab();
	
	
	cout << " 2ème entier de V1 : " << V1.element(1) << endl;

	return 0;
}
