#include <iostream>
#include "Definition.h"

using namespace std;


Definition::Definition(){
	m_key.setChaine("CLEF");
	m_def.setChaine("DEF");
}

Definition::Definition(char chaineClef[], char chaineDef[]){
	m_key.setChaine(chaineClef);
	m_def.setChaine(chaineDef);
}

Definition::~Definition(){
	delete &m_key;
	delete &m_def;
}

/********  METHODES  ************/


char* Definition::getClef() const{
	return m_key.getChaine();
}

char* Definition::getDef() const{
	return m_def.getChaine();
}

void Definition::setClef(char *mot){
	m_key.setChaine(mot);
}

void Definition::setDef(char *definition){
	m_def.setChaine(definition);
}
