/*
 * CFile.cpp
 *
 *  Created on: 4 nov. 2020
 *      Author: jfchardon
 */

#include "CFile.h"

CFile::CFile() {
	type_name = "File";

}

CFile::~CFile() {
	//
}

CListe& CFile::operator>(int & i) {
	if (debut == NULL) {
		cout << "File vide" << endl;
	}
	else {
		element * courant  = debut;		// pour parcourir la liste.
		// on conserve le debut de la liste.
		while(courant->suivant->suivant != NULL) {
			courant = courant->suivant;
		}
		element * adn = courant->suivant;
		i = adn->valeur;
		courant->suivant = NULL;
		delete adn;
	}
	return *this;
}

