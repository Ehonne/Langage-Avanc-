#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;


class CString {
	private: 
		int nbr_car;
		char *chaine;	//Chaine de carac
	
	public:
		CString();
		CString(char Chaine);
		CString(char *Chaine);
		~CString();					//Destructeur
		getString();
		plusGrandQue(char *Chaine);
		infOuEgale(char *Chaine);
}

