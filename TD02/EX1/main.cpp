#include <iostream>
#include "CString.h"

using namespace std;

int main(){
	
	CString S1, S2, SZ('q');
	S1.setChaine("chaine1");
	S2.setChaine("sentence two");
	
	cout << "nbr de chaines instanciées : " << CString::getNbrChaine() << endl;
	
	cout << "S1 : ";
	S1.affiche_chaine(); cout << endl;
	cout << "S2 : ";
	S2.affiche_chaine(); cout << endl;
	cout << "SZ : ";
	SZ.affiche_chaine();
	
	
	CString SS(SZ);
	cout << "SS : ";
	SS.affiche_chaine();
	
	
	// test de l'opérateur == :
	if (S1 == S2) cout << "S1 est egale à S2" << endl;
	else cout << "S1 et S2 ne sont pas égales" << endl;
	
	//test de l'opérateur != :
	if (S1 != S2) cout << "S1 est différente de S2" << endl;
	else cout << "S1 est égale à S2" << endl;
	
	// test de l'opérateur > :
	if (S1 > S2) cout << "S1 est plus grande alphabétiquement que S2" << endl;
	else cout << "S1 n'est plus grande alphabétiquement que S2" << endl;
	cout << endl;
	
	// test de <= :
	CString S3("sentence three");
	cout << "S3 : ";
	S3.affiche_chaine();
	if (S2 <= S3) cout << "S2 est plus petite que S3 alphabétiquement" << endl;
	else cout << "S2 est plus grande alphabetiquement que S3" << endl; 
	
	

	CString S4 = S1 + S2;
	cout << "S4 est le resultat des chaines S1 + S2 : ";
	S4.affiche_chaine();
	
}
