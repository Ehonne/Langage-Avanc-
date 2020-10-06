#include <iostream>
#include "Vecteur.h"

using namespace std;


Vecteur::Vecteur(){
	m_dim = 1;
	m_set = new int[m_dim];
	m_set[0] = 0;
}

Vecteur::Vecteur(int dimension){
	m_dim = dimension;
	m_set = new int[m_dim];
	for(int i(0); i<m_dim; ++i){
		m_set[i] = 0;
	}
}

Vecteur::Vecteur(Vecteur const& cible){
	m_dim = cible.getDim();
	m_set = new int[m_dim];
	for(int i =0; i < m_dim; i++)
        {
            m_set[i] = cible.getTableau() [i];
        }
}

Vecteur::Vecteur(int *tableau, int taille){
	m_dim = taille;
	m_set = new int[m_dim];
        for(int i =0; i < taille; i++)
        {
            m_set[i] = tableau[i];
        }
}

// Destructeur :
Vecteur::~Vecteur(){
	delete[] m_set;
}




/********    METHODES  :   ********/
int Vecteur::getDim() const{
	return m_dim;
}
int* Vecteur::getTableau() const{
	return m_set;
}

void Vecteur::afficherTab() const{
	for(int i(0); i<m_dim ; ++i){
		cout << m_set[i] << " ";
	}
	cout << endl;
}


/*******  SURCHARGE D'OPERATEURS  :   ******************/
Vecteur& Vecteur::operator =(const Vecteur& v){
	m_dim = v.getDim();
	delete [] m_set;
	m_set = new int[m_dim];
	for(int i(0); i<m_dim; ++i){
		m_set[i] = v.getTableau() [i];
	}
	return *this;
}

int& Vecteur::operator[](int i){
		if(i > m_dim){
			cout << endl << "Index out of range" << endl;
			exit(1);
		}
		else return m_set[i-1];
}

Vecteur operator +(const Vecteur& v1, const Vecteur& v2){
	int j(0);
	Vecteur nouveau;
	nouveau.m_dim = v1.m_dim + v2.m_dim;
	nouveau.m_set = new int[nouveau.m_dim];
	for(int i(0); i<v1.m_dim; ++i){
		nouveau.m_set[j] = v1.m_set[i];
		j++;
	}
	for(int i(0); i<v2.m_dim; ++i){
		nouveau.m_set[j] = v2.m_set[i];
		j++;
	}
	return nouveau;
}

Vecteur& Vecteur::operator+=(const Vecteur& v){
	
	// on sauvegarde notre tableau actuel dans T :
	int *T = new int[m_dim];
	for(int i(0); i<m_dim; ++i){
		T[i] = m_set[i];
	}
	
	// On libère la mémoire et on fixe la nouvelle taille de notre tableau :
	delete [] m_set;
	this->m_set = new int[m_dim + v.getDim()];
	
	// On rempli notre tableau :
	int j(0);
	for(int i(0); i<m_dim; ++i){
		m_set[j] = T[i];
		j++;
	}
	for(int i(0); i<v.getDim(); ++i){
		m_set[j] = v.getTableau() [i];
		j++;
	}
	this->m_dim += v.getDim();
	
	// on libere la memoire
	delete [] T;
	
	return *this;
}
