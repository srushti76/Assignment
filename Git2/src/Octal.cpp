/*
 * Octal.cpp
 *
 *  Created on: 11-Oct-2020
 *      Author: w100676
 */

#include "Octal.h"

Octal::Octal() {
	// TODO Auto-generated constructor stub

}
void Octal::print_it(){

	int octalNum = 0, placeValue = 1;
	   int dNo = n;
	   while (n != 0) {
	      octalNum += (n % 8) * placeValue;
	      n /= 8;
	      placeValue *= 10;
	   }
	   cout<<"Octal form of decimal number "<<dNo<<" is "<<octalNum<<endl;
	}



Octal::~Octal() {
	// TODO Auto-generated destructor stub
}

