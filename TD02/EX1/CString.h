#ifndef DEF_CSTRING
#define DEF_CSTRING

#include <iostream>

class CString{

	private:
	// Attributs :
	char *str;
	int m_nbChaines;
	static int compteur;
	
	
	public:
	// Constructeurs :
	CString();
	CString(char c);
	CString(const char chaine[]);
	CString(CString const& cible);
	~CString();  // destructeur
	
	// Méthodes :
	static int getNbrChaine();
	void affiche_chaine() const;
	void plus(char chaine[]);
	void setChaine(char chaine[]);
	char* getChaine() const;
	bool plusGrandQue(CString const& cible);
	bool InfOuEgal(CString const& cible);
	bool PlusGrand(CString const& cible);
	//CString& plusGrand(CString& s);
	CString Plus(char chaine[]);
	
	// Surcharge des operateurs :
	bool operator ==(CString const& a);
	bool operator !=(CString const& cible);
	bool operator >(CString const& cible);
	bool operator <=(CString const& cible);
	CString operator +(CString const& cible);
	char& operator[](unsigned i);
	// ajouter les surcharges de << et >> : ostream et istream
		
};

#endif
