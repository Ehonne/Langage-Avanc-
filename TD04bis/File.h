/*
 * File.h
 *
 *  Created on: 9 nov. 2020
 *      Author:
 */

#ifndef FILE_H_
#define FILE_H_
#include "Liste.h"

template <typename T>
class File : public Liste<T>{
public:
	File() {
		this->type_name = "File";
	}

	~File() {
		//
	}

	virtual Liste<T>& operator>(T & i) {
		if (this->debut == NULL) {
			cout << "File vide" << endl;
		}
		else {
			element<T> * courant  = this->debut;		// pour parcourir la liste.
			// on conserve le debut de la liste.
			while(courant->suivant->suivant != NULL) {
				courant = courant->suivant;
			}
			element<T> * adn = courant->suivant;
			i = adn->valeur;
			courant->suivant = NULL;
			delete adn;
		}
		return *this;
	}
};

#endif /* FILE_H_ */
