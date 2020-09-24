#include <iostream>
#include <string>
#include "Definition.h"


using namespace std;

int main(){
	
	CString s1("toto"), s2('q'), s3;
	
	s1.affiche_chaine();
	s2.affiche_chaine();
	
	s1.plus(s2.getChaine());
	s1.affiche_chaine();
	
	CString s4("bnsoir");
	s2.plus(s4.getChaine());
	s2.affiche_chaine();
	
	if (s2.plusGrandQue(s1)) cout << "s2 est plus grand que s1" << endl;
	s2.InfOuEgal(s1);
	
	
	s1.setChaine("nouvellechaine");
	cout << "la chaine s1 devient maintenant : ";
	s1.affiche_chaine();
	
	cout << endl;
	
	Definition Homer( "Homer", "Buveur de bières");
	cout << "la definition du mot " << Homer.getClef() << " est " << Homer.getDef() << endl;
	
	
	
	
	
	
	return 0;
}
