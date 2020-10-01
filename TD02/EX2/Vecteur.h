#ifndef DEF_VECTEUR
#define DEF_VECTEUR

class Vecteur{
	// Attributs :
	private:
	int *m_set;
        int m_dim;      //Dimansion
	
	public:
	// Constructeurs :
	Vecteur();
	Vecteur(int dimension);
        Vecteur(int *tableau, int taille);
	Vecteur(Vecteur const& cible);
	~Vecteur(); // destructeur
	
	// Méthodes :
	int getDim() const;
	void setDim(int taille);
	int* getTableau() const;
	void afficherTab() const;
	int& element(int i);
	void ajoutElement(int i);
	void Plus(Vecteur const& cible);
	
	/***** SURCHARGE D'OPERATEURS   ********/
	void operator +=(Vecteur const& cible);
	
	
};
#endif
