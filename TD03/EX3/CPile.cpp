/*
 * CPile.cpp
 *
 *  Created on: 4 nov. 2020
 *      Author: jfchardon
 */

#include "CPile.h"


CPile::CPile() {
	type_name = "Pile";
}

CPile::~CPile() {
	//
}

CListe& CPile::operator>(int & i) {
	if (debut == NULL) {
		cout << "pile vide" << endl;
	}
	else {
		element * courant = new element;
		courant = debut;
		i = courant->valeur;
		debut = debut->suivant;
		delete courant;
	}
	return *this;
}

