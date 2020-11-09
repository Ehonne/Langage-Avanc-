/*
 * Pair.cpp
 *
 *  Created on: 9 nov. 2020
 *      Author: Gwen
 */

#include "Pair.h"
#include <iostream>
#include <type_traits>
#include <typeinfo>


template <typename p>
Pair<p>::Pair(p UN, p DEUX)
{
	TAB[0] = UN;
	TAB[1] = DEUX;
}

/*template <typename p>
Pair<p>::~Pair()
{
	delete TAB;
}*/

template <typename p>
 p Pair<p>::getMax()
{

	if((typeid(p) != typeid(int)) && (typeid(p) != typeid(float)) )
	{
		 std::cout << "fonction pas encore implémentée pour le type donné";
		 exit(1);
	}
	if(TAB[1] > TAB[0])
		return TAB[1];
	else
		return TAB[0];
}

template class Pair<float>;
template class Pair<int>;
template class Pair<char>;
