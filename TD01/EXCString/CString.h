#ifndef DEF_CSTRING
#define DEF_CSTRING

using namespace std;


class CString {
	private: 
		char *chaine;	//Chaine de carac
	
	public:
		int nbr_chaine = 0;
		CString();
		CString(char Chaine);
		CString(char *Chaine);
		//~CString();	//Destructeur				
		char *getString();
		int nbrChaines();
		bool plusGrandQue(CString &Chaine);
		bool infOuEgale(CString &Chaine);
		char* plus(char *Chaine);
};
#endif
