#include <iostream>
#include <cstring>
#include "CString.h"

using namespace std;

CString::CString(){
	str = new char[1];
	m_nbChaines = 0;
}

CString::CString(char c){
	str = new char[2];
	str[0] = c;
	str[1] = 0;
	m_nbChaines = 1;
}

CString::CString(char chaine[]){
	str = new char[strlen(chaine)+1];
	str = chaine;
	m_nbChaines = 1;
}


CString::CString(CString &cible){
	str = new char[strlen(cible.getChaine()) + 1];
	str = cible.getChaine();
}



/******** METHODE ********************/
void CString::affiche_chaine() const{
	cout << str << endl;
}

char* CString::getChaine() const{
	return str;
}

void CString::setChaine(char chaine[]){
	str = new char[strlen(chaine) + 1];
	str = chaine;	
}


void CString::plus(char chaine[]){
	
	// Ancienne methode (sans strlen()) :
	/*
	 *	int j(0);
	 *	for(int i(0); i<strlen(str) ; ++i){
	 *		nouvelle[i] = str[i];
	 *		j++;
	 *	}
	 *
	 *	for(int i(0); i<strlen(chaine) ; ++i){
	 *		nouvelle[j] = chaine[i];
	 *		j++;
	 *	}
	 *	str = new char[strlen(chaine)+1];
	 *	str = nouvelle;
	 */
	 
	 
	// Ici on definit la taille de "nouvelle" qui sera la taille des deux chaines ajoutées
	
	char *nouvelle = new char[strlen(str) + 1];
	nouvelle = str;
	
	// On fait la même chose sur str , et on concatene les chaines dans str :
	str = new char[strlen(nouvelle) + strlen(chaine) + 1];
	strcat(str, nouvelle);
	strcat(str, chaine);

}

bool CString::plusGrandQue(CString &cible){
	
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q','r','s','t','u','v','w','x','y','z'};
	
	for(int i(0); i<26; ++i){
		if ((str[i] == alphabet[i]) && (cible.getChaine() [i] == alphabet[i])) continue;
		else if((str[i] == alphabet[i]) && (cible.getChaine() [i] != alphabet[i])) return true;
		else if((str[i] != alphabet[i]) && (cible.getChaine() [i] == alphabet[i])) return false;
	}
		
	return -1;
	
}

bool CString::InfOuEgal(CString &cible){
	
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q','r','s','t','u','v','w','x','y','z'};
	
	for(int i(0); i<26; ++i){
		if ((str[i] == alphabet[i]) && (cible.getChaine() [i] == alphabet[i])) continue;
		else if((str[i] == alphabet[i]) && (cible.getChaine() [i] != alphabet[i])) return false;
		else if((str[i] != alphabet[i]) && (cible.getChaine() [i] == alphabet[i])) return true;
	}
		
	return true;
}

bool CString::PlusGrand(CString &cible){
	int a = strlen(str);
	int b = strlen(cible.getChaine());
	
	if (a > b) return true;
	else return false;
}




