#include <iostream>
#include <cstdlib>
#include <string.h>
#include "CString.h"
using namespace std;

CString::CString() 
{
	chaine = new char [1];
	strcpy(chaine,'');
}

CString::CString(char a) 
{
	chaine = new char [1];
	strcpy(chaine,a);
}

CString::CString(char *a) 
{
	chaine = new char [strlen(a)+1];
	strcpy(chaine,a);
}

CString::getString()
{
	return chaine;
}
