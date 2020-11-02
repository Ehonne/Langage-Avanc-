#include <iostream>
#include <string>
#include <stdlib.h>
#include "Cpile.h"
using namespace std;


Clist::Cpile()
{
	type_name = "Pile";
}

Clist::~Cpile()
{
	//
}

/*
Cpile& Cpile::operator >(int & i)
{
	if(debut == NULL) {
		printf("erreur, pile vide");
	}
	else {
		element * courant = debut;
		i = courant->value;
		debut = debut->suivant;
		delete courant;
	}
	return *this;
}
*/

int main()
{
	/*
	Cpile pile;
	Clist * ptListe = &pile;
	* ptListe < 10 < 20;
	cout << * ptListe;
	int i;
	* ptListe > i;
	cout << * ptListe << "i= " << i << endl;
	*/
	
	return 0;
}
