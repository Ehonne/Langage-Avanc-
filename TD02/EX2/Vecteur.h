#ifndef DEF_VECTEUR
#define DEF_VECTEUR


struct Element{
	Element *suivant;
	int valeur;
};

struct Liste{
	Element *premier;
};




class Vecteur{
	// Attributs :
	private:
	int *m_set;
    int m_dim;      //Dimension
    // Liste *l;
	
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
	// void AJoutElement(int i);
	// int getElement(int i);
	
	/***** SURCHARGE D'OPERATEURS   ********/
	Vecteur& operator=(const Vecteur& v);
	int& operator[](int i);
	friend Vecteur operator+(const Vecteur& v1, const Vecteur& v2);
	Vecteur& operator+=(const Vecteur& v); 
	// bool PlusGrandQue(Vecteur& s);
	// bool InfOuEgal(Vecteur& v);
	// bool operator > (const Vecteur& v1, const Vecteur& v2);
	// bool operator <= (const Vecteur& v1, const Vecteur& v2);
	
};

#endif
