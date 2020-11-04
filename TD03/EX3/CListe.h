/*
 * CListe.h
 *
 *  Created on: 4 nov. 2020
 *      Author: jfchardon
 */

#ifndef CLISTE_H_
#define CLISTE_H_
#include <iostream>
#include <string>
using namespace std;

struct element {
	int valeur;
	element * suivant;
};

class CListe {
protected:
	string type_name;
	element * debut;

public:
	CListe();
	virtual ~CListe();

	CListe& operator<(int i);
	virtual CListe& operator>(int & i);
	int& operator[](int i);
	friend ostream& operator<<(ostream& flux, CListe & l);

};

#endif /* CLISTE_H_ */
