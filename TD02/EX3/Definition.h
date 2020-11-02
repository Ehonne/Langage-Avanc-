#ifndef DEF_DEFINITION
#define DEF_DEFINITION

#include "CString.h"

class Definition{
	
	private:
	// On a le mot clé (le mot lui-meme) :
	CString m_key;
	// Et la definition du mot :
	CString m_def;
	
	
	
	
	public:
	// Constructeurs :
	Definition(char *chaineClef, char *chaineDef); 
	Definition();
	~Definition();  //destructeur
	
	// Les méthodes :
	char* getClef() const;
	char* getDef() const;
	void setClef(char *mot);
	void setDef(char *definition);
	
	
};

#endif
