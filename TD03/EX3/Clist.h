#ifndef DEF_CLIST
#define DEF_CLIST
#include <iostream>
#include <string>

using namespace std;

struct element
{
	int value;
	element * suivant;
};


class Clist
{
	protected:
	string type_name;
	element * debut;
	
	public:
	Clist();
	~Clist();
	Clist& operator<(int i);
	virtual Clist& operator >(int & i);
	int& operator[](int i);
	friend ostream& operator<< (ostream & flux, Clist& l);
	
};

#endif
