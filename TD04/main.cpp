/*
 * main.cpp
 *
 *  Created on: 7 nov. 2020
 *      Author: Gwen
 */
#include <iostream>
#include "../CString/CString.h"
#include "Pair.h"
using namespace std;


template <typename type>
type GetMax(type& a, type& b)
{
	if(a > b)
		return a;
	else
		return b;
}

int main(){
	int i=5, j=6, k;
	float l=10.0, m=5.0, n;
	k = GetMax(i, j); //retourne le plus grand entre i et j
	n = GetMax(l, m); //retourne le plus grand entre l et m
	cout << k << endl;
	cout << n << endl;

	int a=5, b=6;
	float c=10.0, d=5.0;
	Pair<int> myInts (a,b); //créer une paire d’entiers
	Pair<float> myFloats (c,d); //créer une paire de flottants
	cout << myInts.getMax()<< endl; //affiche le plus grand des 2 entiers
	cout << myFloats.getMax()<<endl;//affiche le plus grand des 2 flottants

	char c1='c', c2='d';
	Pair<char> myChars(c1,c2);//creer un objet qui contient une paire d’entiers
	cout << myChars.getMax()<< endl;
	/*CString s1("toto"), s2('s'), s3;
	s3 = GetMax(s1, s2); //retourne le plus grand entre s1 et s2
	cout << s3.getString() << endl;*/

	return 0 ;
}


