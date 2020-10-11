/*
 * Decimal.h
 *
 *  Created on: 11-Oct-2020
 *      Author: w100676
 */

#ifndef DECIMAL_H_
#define DECIMAL_H_
#include "Number.h"

class Decimal :public Number{
public:
	Decimal();
	virtual ~Decimal();
	void print_it();
};

#endif /* DECIMAL_H_ */
