//============================================================================
// Name        : Git1.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
#include "Women.h"
#include "Man.h"
using namespace std;

int main() {
	cout << "Virtual functio demo" << endl; // prints !!!Hello World!!!
  Person *p;
  Man m;
  Women w;
  p=&m;
  p->showGender();
  p=&w;
  p->showGender();



	return 0;
}
