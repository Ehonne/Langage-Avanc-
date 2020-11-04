/*
 * CPile.h
 *
 *  Created on: 4 nov. 2020
 *      Author: jfchardon
 */

#ifndef CPILE_H_
#define CPILE_H_
#include "CListe.h"

class CPile : public CListe{
public:
	CPile();
	~CPile();

	virtual CListe& operator>(int & i);
};

#endif /* CPILE_H_ */
