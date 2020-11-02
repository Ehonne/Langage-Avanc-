#ifndef DEF_CPILE
#define DEF_CPILE

#include "Clist.h"

class Cfile : public Clist
{
	public:
	Cfile();
	~Cfile();
	Cfile& operator >(int & i);
};

#endif
