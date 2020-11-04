/*
 * CFile.h
 *
 *  Created on: 4 nov. 2020
 *      Author: jfchardon
 */

#ifndef CFILE_H_
#define CFILE_H_
#include "CListe.h"

class CFile : public CListe {
public:
	CFile();
	~CFile();

	virtual CListe& operator>(int & i);
};

#endif /* CFILE_H_ */
