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
	
	//test operateur [] :
	cout << "2eme élément de V1 : ";
	cout << V1[2] << endl;
	// test operateur = :
	V1 = V4;
	cout << "V1 = V4, V1 est mtn : ";
	V1.afficherTab();
	//test operateur + :
	Vecteur u = V1 + V4;
	cout << "Vecteur u = V1 + V4 : ";
	u.afficherTab();
	
	
	V2 += V4;
	cout << "V2 += V4 : ";
	V2.afficherTab();
	
	return 0;
}
