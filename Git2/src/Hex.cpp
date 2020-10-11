/*
 * Hex.cpp
 *
 *  Created on: 11-Oct-2020
 *      Author: w100676
 */

#include "Hex.h"

Hex::Hex() {
	// TODO Auto-generated constructor stub

}
void Hex::print_it(){
	char hex_string[20];
	 sprintf(hex_string, "%X", n);
	 cout<<"Number in the Form of Hex  :"<<hex_string<<endl;
}

Hex::~Hex() {
	// TODO Auto-generated destructor stub
}

