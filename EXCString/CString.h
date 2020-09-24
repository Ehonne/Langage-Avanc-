#ifndef DEF_CSTRING
#define DEF_CSTRING

class CString{
	
	private:
	char *str;
	int m_nbChaines;
	
	
	
	
	public:
	// Constructeurs :
	CString();
	CString(char c);
	CString(char *chaine);
	CString(CString &cible);
	
	// Méthodes :
	void affiche_chaine() const;
	void plus(char chaine[]);
	char* getChaine() const;
	bool plusGrandQue(CString &cible);
	bool InfOuEgal(CString &cible);
	bool PlusGrand(CString &cible);
		
};

#endif
