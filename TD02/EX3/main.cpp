#include <iostream>
#include "Definition.h"

using namespace std;


int main(){

	Definition D("clef", "outils qui ouvre des portes");
	cout << D.getClef() << " : " << D.getDef() << endl;



	return 0;
}
