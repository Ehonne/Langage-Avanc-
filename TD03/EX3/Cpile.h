#ifndef DEF_CPILE
#define DEF_CPILE

#include "Clist.h"

class Cpile : public Clist {
	public:
	Cpile();
	~Cpile();
	Cpile& operator >(int & i);
};

#endif
