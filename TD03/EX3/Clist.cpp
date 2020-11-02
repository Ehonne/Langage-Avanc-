#include <iostream>
#include <stdlib.h>
#include "Clist.h"
using namespace std;


Clist::Clist(){
	type_name = "Liste";
	debut = NULL;
}

// Destructeur :
Clist::~Clist(){
	element * adn;
	element * courant = debut;
	while(courant)
	{
		adn = courant;
		courant = courant->suivant;
		delete adn;
	}
}

Clist& Clist::operator<(int i)
{
	element * adn = new element;
	adn->value = i;
	if (debut == NULL) {debut = adn; adn->suivant = NULL; }
	else { adn->suivant = debut; debut = adn;};
	return *this;
}

Clist& Clist::operator>(int & i)
{
	cout << "je ne peux pas faire ça en tant que Liste " << endl;
	return *this;
}


int& Clist::operator [](int i)
{
	int j(1);
	if (debut){
		element * courant = debut;
		while((courant) && (j < i))
		{
			courant = courant->suivant;
			j++;
		}
		if (courant == NULL) {
			printf("Error : Index out of range \n");
			exit(1);
		}
		return courant->value;
	}
	else {
		printf("Liste vide");
		exit(1);
	}
		
}

ostream& operator << (ostream & flux, Clist & l)
{
	flux << "voici une liste de type : " << l.type_name << " : " << endl;
	if (l.debut == NULL) flux << "empty list " << endl;
	else {
		element * tmp = l.debut;
		while(tmp != NULL) {
			flux << tmp->value << " ";
			tmp = tmp->suivant;
			cout << "salt" << endl;
		}
	}
	return flux;
}

int main()
{
	Clist  L;
	L < 10 < 20;

	
	cout << L << endl;
	
	return 0;
}

