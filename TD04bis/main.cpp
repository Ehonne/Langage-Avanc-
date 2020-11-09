//============================================================================
// Name        : TD4_Template.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Pair.h"
#include "Liste.h"
#include "Pile.h"
#include "File.h"
using namespace std;

/******** Exercise 1  ********************/
template <typename T>
	T GetMax1(const T & a , const T & b)
	{
		if (a>b) return a;
		else return b;
	}


int main() {

	int i(6), j(5), k;
	float l=10.0, m=5.0, n;

	k = GetMax1(i,j);
	n = GetMax1(l,m);

	cout << k << endl;
	cout << n << endl;

	/************ Exercise II  ****************/

	Pair<int> myInt(i,j);
	Pair<float> myFloat(l,m);

	cout << myInt.GetMax() << endl;
	cout << myFloat.GetMax() << endl;

	// test pour le char :
	Pair<char> myChar('a', 'b');

	//cout << myChar.GetMax() << endl;


	/********************************************/
	/*********  Exercise III   ******************/

	Pile<char> Lpile;
	File<char> Lfile;

	Liste<char>   * listeFloat = &Lpile;

	// Pile :
	* listeFloat < 'r' < 'e' < 'x';
	cout << * listeFloat;

	char c;
	* listeFloat > c;
	cout << * listeFloat << " caractère = " << c << endl;;

	// File :
	listeFloat = &Lfile;
	* listeFloat < 'a' < 'b' < 'c';
	cout << * listeFloat;

	* listeFloat > c;
	cout << * listeFloat << " caractère = " << c << endl;;

	return 0;
}
