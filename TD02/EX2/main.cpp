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
	
	
	V1.ajoutElement(1);
	cout << "V1 après ajout : ";
	V1.afficherTab();
	
	
	V2.Plus(V4);
	cout << "V2 apres addition de lui-même avec V4 : ";
	V2.afficherTab();
	
	
	// test Surcharge des opérateurs :
	Vecteur V5(3);
	cout << "V5 : ";
	V5.afficherTab();
	V5 += V1;
	cout << "V5 += V1  : ";
	V5.afficherTab();
	
	// test operateur == :
	if (V5 == V3) cout << "V5 est egal à V3" << endl;
	else cout << "V5 est différent de V3"<< endl;
	
	
	return 0;
}
