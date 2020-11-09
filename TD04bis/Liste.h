/*
 * Liste.h
 *
 *  Created on: 9 nov. 2020
 *      Author:
 */

#ifndef LISTE_H_
#define LISTE_H_
#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

template <typename T>
struct element
{
	T valeur;
	element<T> * suivant;
};

template <typename T>
class Liste {
protected:
	string type_name;
	element<T> * debut;
public:

	// Constructor and  Destructor :
	Liste() {
		type_name = "Liste";
		debut = NULL;
	}

	virtual ~Liste() {
		element<T> * adn;
		element<T> * courant = debut;
		while(courant) {
			adn = courant;
			courant = courant->suivant;
			delete adn;
		}
	}

	// Getter :
	string Gettype()
	{
		return this->type_name;
	}

	Liste& operator <(T i) {
		element<T> * noeud = new element<T>;
		noeud->valeur = i;
		if(debut == NULL) { debut = noeud; noeud->suivant = NULL; }
		else {
			noeud->suivant = debut;
			debut = noeud;
		}
		return *this;
	}


	virtual Liste& operator >(T & i) {
		cout << "je ne peux pas effectuer ceci" << endl;
		return *this;
	}


	T& operator [](T i) {
		int j(1);
		if(debut) {
			element<T> * courant = debut;
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

	friend ostream& operator<<(ostream & flux, Liste & l) {
		flux << "Voici une liste de type : " << l.type_name << " : ";
		if(l.debut == NULL) flux << "empty list";
		else {
			element<T> * courant = l.debut;
			while(courant) {
				flux << courant->valeur << " ";
				courant = courant->suivant;
			}
		}
		flux << "\n";
		return flux;
	}

};

#endif /* LISTE_H_ */
