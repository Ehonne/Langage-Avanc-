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

        int TAB[5];
        for (int i = 0; i < 5; i++)
        {
            TAB[i] = rand() %10;
        }
        Vecteur V4(TAB,5);
        cout << "V4 : ";
        V4.afficherTab();

	cout << " 2ème entier de V1 : " << V1.element(1) << endl;
	
	
	V1.ajoutElement(10);
	cout << "V1 : ";
	V1.afficherTab();
	
	
	
	return 0;
}
