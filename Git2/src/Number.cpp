/*
 * Number.cpp
 *
 *  Created on: 11-Oct-2020
 *      Author: w100676
 */

#include "Number.h"

Number::Number() {
	// TODO Auto-generated constructor stub
  n=0;
}

void Number::accept(){
	cout<<"Enter Number :"<<endl;
	cin>>n;
}
void Number::print_it(){
	cout<<"Number  :"<<n<<endl;
}
Number::~Number() {
	// TODO Auto-generated destructor stub
}

