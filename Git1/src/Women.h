/*
 * Women.h
 *
 *  Created on: 11-Oct-2020
 *      Author: w100676
 */

#ifndef WOMEN_H_
#define WOMEN_H_

#include "Person.h"

class Women: public Person {
public:
	Women();
	virtual ~Women();
	void showGender();
};

#endif /* WOMEN_H_ */
