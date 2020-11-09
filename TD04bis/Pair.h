/*
 * Pair.h
 *
 *  Created on: 9 nov. 2020
 *      Author:
 */

#ifndef PAIR_H_
#define PAIR_H_

#include <iostream>
#include <stdlib.h>
#include <typeinfo>

template <class p>
class Pair {
private:
	p x;
	p y;

public:
	Pair(p a, p b)
	{
		x = a ; y = b;
	}

	p GetMax()
	{
		if ( (typeid(p) != typeid(int)) && (typeid (p) != typeid(float)) ) {
				std::cout << "Fonction non-implémentée pour ce type d'objet" << std::endl;
				exit(1);
			}
		else if (x > y) return x;
		else return y;
	}


};

#endif /* PAIR_H_ */
