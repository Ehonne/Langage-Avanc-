#ifndef DEF_CSTRING
#define DEF_CSTRING

class CString{

	private:
	// Attributs :
	char *str;
	int m_nbChaines;
	
	
	
	public:
	// Constructeurs :
	CString();
	CString(char c);
	CString(char *chaine);
	CString(CString const& cible);
	//~CString();  // destructeur
	
	// Méthodes :
	void affiche_chaine() const;
	void plus(char chaine[]);
	void setChaine(char chaine[]);
	char* getChaine() const;
	bool plusGrandQue(CString const& cible);
	bool InfOuEgal(CString const& cible);
	bool PlusGrand(CString const& cible);
	CString Plus(char chaine[]);
	
	// Surcharge des operateurs :
	bool operator ==(CString const& a);
	bool operator !=(CString const& cible);
	bool operator >(CString const& cible);
	bool operator <=(CString const& cible);
	CString operator +(CString const& cible);
};

#endif
