/*
 * Person.h
 *
 *  Created on: 11-Oct-2020
 *      Author: w100676
 */

#ifndef PERSON_H_
#define PERSON_H_
#include <iostream>
using namespace std;

class Person {
public:
	Person();
	virtual ~Person();

	virtual void showGender()=0;
};

#endif /* PERSON_H_ */
