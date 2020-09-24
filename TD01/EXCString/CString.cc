#include <iostream>
#include <cstdlib>
#include <cstring>
#include "CString.h"
using namespace std;

CString::CString() 
{
	chaine = new char[1];
	//strcpy(chaine,'/o');
	nbr_chaine++;
}

CString::CString(char a) 
{
	chaine = new char[2];
	chaine[0] = a;
	chaine[1] = 0;
	nbr_chaine++;
}

CString::CString(char *a) 
{
	chaine = new char [strlen(a)+1];
	chaine = a;
	nbr_chaine++;
}

char *CString::getString()
{
	return chaine;
}

char * CString::plus(char *string)
{
	// Ici on definit la taille de "nouvelle" qui sera la taille des deux chaines ajoutées
	
	char *nouvelle = new char[strlen(chaine) + 1];
	nouvelle = chaine;
	
	// On fait la même chose sur str , et on concatene les chaines dans str :
	chaine = new char[strlen(nouvelle) + strlen(chaine) + 1];
	strcat(chaine, nouvelle);
	strcat(chaine, string);
	return chaine;
}


int CString::nbrChaines()
{
	return nbr_chaine;
}

bool CString::plusGrandQue(CString &string){
	
	int a = strlen(chaine);
	int b = strlen(string.getString());
	
	if (a > b) return true;
	else return false;
	
}

bool CString::infOuEgale(CString &string){
	
	char alphabet[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', 'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q','r','s','t','u','v','w','x','y','z'};
	
	for(int i(0); i<26; ++i){
		if ((chaine[i] == alphabet[i]) && (string.getString() [i] == alphabet[i])) continue;
		else if((chaine[i] == alphabet[i]) && (string.getString() [i] != alphabet[i])) return true;
		else if((chaine[i] != alphabet[i]) && (string.getString() [i] == alphabet[i])) return false;
	}
		
	return -1;
}
