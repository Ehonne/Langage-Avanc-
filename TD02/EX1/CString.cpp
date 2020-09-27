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


CString::CString(CString const& cible){
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

bool CString::plusGrandQue(CString const& cible){
	
	int cpt(0), cpt2(0), j(0);
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q','r','s','t','u','v','w','x','y','z'};
	
	for(int i(0); i<26; ++i){
		if (str[i] == cible.getChaine() [i]) continue;
		else if(str[i] != cible.getChaine() [i]){
			while(str[i] != alphabet[j]){
				cpt++;
				j++;
			}
			j = 0;
			
			while(cible.getChaine() [i] != alphabet[j]){
				cpt2++;
				j++;
			}
			j = 0;
			
			if (cpt > cpt2) return false;
			else return true;
		}
	}
		
	return false;
	
}

bool CString::InfOuEgal(CString const& cible){
	
	int cpt(0), cpt2(0), j(0);
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q','r','s','t','u','v','w','x','y','z'};
	
	for(int i(0); i<26; ++i){
		if (str[i] == cible.getChaine() [i]) continue;
		else if(str[i] != cible.getChaine() [i]){
			while(str[i] != alphabet[j]){
				cpt++;
				j++;
			}
			j = 0;
			
			while(cible.getChaine() [i] != alphabet[j]){
				cpt2++;
				j++;
			}
			j = 0;
			
			if (cpt > cpt2) return true;
			else return false;
		}
	}
	
	
		
	return true;
}

bool CString::PlusGrand(CString const& cible){
	int a = strlen(str);
	int b = strlen(cible.getChaine());
	
	if (a > b) return true;
	else return false;
}

CString CString::Plus(char chaine[]){
	
	CString S;
	
	char *nouvelle = new char[strlen(str) + strlen(chaine) + 1];
	strcat(nouvelle, str);
	strcat(nouvelle, chaine);
	
	S.setChaine(nouvelle);
	return S;
}


/*******  SURCHARGE D'OPERATEURS  ***************/
bool CString::operator ==(CString const& cible){
	if (str == cible.getChaine()) return true;
	else return false;
}

bool CString::operator !=(CString const& cible){
	return !(str == cible.getChaine());
}

bool CString::operator >(CString const& cible){
	return this->plusGrandQue(cible);
}

bool CString::operator <=(CString const& cible){
	return this->InfOuEgal(cible);
}

CString CString::operator +(CString const& cible){
	CString S;
	S = this->Plus(cible.getChaine());
	return S;
}

