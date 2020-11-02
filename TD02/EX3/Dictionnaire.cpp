#include <iostream>
#include "Dictionnaire.h"

using namespace std;


Dictionnaire::Dictionnaire(){
	
}



Dictionnaire::~Dictionnaire(){
	delete &m_actuel;
	delete &suivant;
}

