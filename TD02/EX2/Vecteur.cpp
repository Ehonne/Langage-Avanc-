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
	m_set = cible.getTableau();
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
	*m_set = 0;
}




/******    METHODES   *******/
int Vecteur::getDim() const{
	return m_dim;
}

void Vecteur::setDim(int taille){
	this->m_dim = taille;
}

int* Vecteur::getTableau() const{
	int *T = new int[m_dim];
	T = m_set;
	return T;
}

void Vecteur::afficherTab() const{
	for(int i(0); i<m_dim ; ++i){
		cout << m_set[i] << " ";
	}
	cout << endl;
}

int& Vecteur::element(int i){
	return m_set[i];
}


void Vecteur::ajoutElement(int i){
	
	
	int *T = new int[m_dim + 1];
	for (int i(0); i<m_dim ; ++i){
		T[i] = m_set[i];
	}
	T[m_dim] = i;
	
	
	this->setDim(this->m_dim + 1);
	m_set = new int[m_dim];
	for (int i(0); i<m_dim ; ++i){
		m_set[i] = T[i];
	}
	delete[] T;
}

