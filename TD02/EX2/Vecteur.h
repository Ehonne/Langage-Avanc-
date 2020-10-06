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
	int* getTableau() const;
	void afficherTab() const;
	
	/***** SURCHARGE D'OPERATEURS   ********/
	Vecteur& operator=(const Vecteur& v);
	int& operator[](int i);
	friend Vecteur operator+(const Vecteur& v1, const Vecteur& v2);
	Vecteur& operator+=(const Vecteur& v);
	
};

#endif
