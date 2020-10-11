/*
 * Man.h
 *
 *  Created on: 11-Oct-2020
 *      Author: w100676
 */

#ifndef MAN_H_
#define MAN_H_

#include "Person.h"

class Man: public Person {
public:
	Man();
	virtual ~Man();
	void showGender();
};

#endif /* MAN_H_ */
