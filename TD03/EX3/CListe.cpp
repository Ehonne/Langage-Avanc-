/*
 * CListe.cpp
 *
 *  Created on: 4 nov. 2020
 *      Author: jfchardon
 */

#include "CListe.h"
#include <iostream>
#include <stdlib.h>

CListe::CListe() {
	type_name = "Liste";
	debut = NULL;
}

CListe::~CListe() {
	element * adn;
	element * courant = debut;
	while(courant) {
		adn = courant;
		courant = courant->suivant;
		delete adn;
	}
}

CListe& CListe::operator <(int i) {
	element * noeud = new element;
	noeud->valeur = i;
	if(debut == NULL) { debut = noeud; noeud->suivant = NULL; }
	else {
		noeud->suivant = debut;
		debut = noeud;
	}
	return *this;
}

CListe& CListe::operator >(int & i) {
	cout << "je ne peux pas effectuer ceci" << endl;
	return *this;
}

int& CListe::operator [](int i) {
	int j(1);
	if(debut) {
		element * courant = debut;
		while(courant && j < i) {
			courant = courant->suivant;
			j++;
		}
		if (courant == NULL) {
			cout << "erreur : Index out of range" << endl;
			exit(1);
		}
		return courant->valeur;
	}
	else{
		cout << "Liste vide" << endl;
		exit(1);
	}
}

ostream& operator<<(ostream & flux, CListe & l) {
	flux << "Voici une liste de type : " << l.type_name << " : ";
	if(l.debut == NULL) flux << "empty list";
	else {
		element * courant = l.debut;
		while(courant) {
			flux << courant->valeur << " ";
			courant = courant->suivant;
		}
	}
	flux << "\n";
	return flux;
}

