#ifndef DEF_VECTEUR
#define DEF_VECTEUR

class Vecteur{
	// Attributs :
	private:
	int *m_set;
	int m_dim;
	
	public:
	// Constructeurs :
	Vecteur();
	Vecteur(int dimension);
	Vecteur(int tableau[], int taille);
	Vecteur(Vecteur const& cible);
	~Vecteur(); // destructeur
	
	// Méthodes :
	int getDim() const;
	int* getTableau() const;
	void afficherTab() const;
	int & element(int i);
	
	/***** SURCHARGE D'OPERATEURS   ********/
	
	
};
#endif
