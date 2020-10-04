#ifndef DEF_CSTRING
#define DEF_CSTRING

class CString{
	
	private:
	char *str;
	int m_nbChaines;
	static int compteur;
	
	
	public:
	// Constructeurs :
	CString();
	CString(char c);
	CString(char *chaine);
	CString(CString &cible);
	//~CString();  // destructeur
	
	// Méthodes :
	void affiche_chaine() const;
	void plus(char chaine[]);
	void setChaine(char chaine[]);
	char* getChaine() const;
	bool plusGrandQue(CString &cible);
	bool InfOuEgal(CString &cible);
	bool PlusGrand(CString &cible);
	
	// Methode statique :
	static int nbrChaines();
		
};

#endif
