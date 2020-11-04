//============================================================================
// Name        : TD3_exo3.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "CPile.h"
#include "CFile.h"
using namespace std;

int main() {

	cout << "Main pour test les piles, files et Listes" << endl;

	CPile pile;
	CFile file;

	CListe  * L = &pile;

	* L < 0 < 1 < 2;	// On empile 0 puis 1.
	cout << * L << endl;
	int i;
	* L > i;	// On dépile et on affiche la valeur dépilée.
	cout << * L << "i = "<< i << endl;


	L = &file;
	* L < 0 < 1 < 2;  // on enfile 0 puis 1.
	cout << * L;
	int j;
	* L > j;
	cout << * L << "i = " << j << endl;

	return 0;
}
