/*
 * Number.h
 *
 *  Created on: 11-Oct-2020
 *      Author: w100676
 */

#ifndef NUMBER_H_
#define NUMBER_H_
#include <iostream>
using namespace std;
class Number {
public:
	Number();
	virtual ~Number();

virtual	void print_it();
	void accept();
protected:
	int n;
};

#endif /* NUMBER_H_ */
