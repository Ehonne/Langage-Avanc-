/*
 * Pair.h
 *
 *  Created on: 9 nov. 2020
 *      Author: Gwen
 */

#ifndef PAIR_H_
#define PAIR_H_

template <typename p>
class Pair {
private:
	p TAB[2];
public:

	Pair(p UN, p DEUX);
	//virtual ~Pair();
	p getMax();
};

#endif /* PAIR_H_ */
