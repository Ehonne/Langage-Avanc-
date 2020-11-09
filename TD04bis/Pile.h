/*
 * Pile.h
 *
 *  Created on: 9 nov. 2020
 *      Author:
 */

#ifndef PILE_H_
#define PILE_H_

#include "Liste.h"

template <typename T>
class Pile : public Liste<T>{
public:
	Pile(){
		this->type_name = "Pile";
	}
	~Pile(){
		//
	}

	virtual Liste<T>& operator > (T  & i) {
		if (this->debut == NULL) {
				cout << "pile vide" << endl;
			}
			else {
				element<T> * courant = new element<T>;
				courant = this->debut;
				i = courant->valeur;
				this->debut = this->debut->suivant;
				delete courant;
			}
			return *this;
	}
};

#endif /* PILE_H_ */
