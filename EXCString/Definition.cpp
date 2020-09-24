#include <iostream>
#include "Definition.h"

using namespace std;




Definition::Definition(char chaineClef[], char chaineDef[]){
	m_key.setChaine(chaineClef);
	m_def.setChaine(chaineDef);
}


/********  METHODES  ************/


char* Definition::getClef() const{
	return m_key.getChaine();
}

char* Definition::getDef() const{
	return m_def.getChaine();
}
