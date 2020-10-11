
#include <iostream>
#include "Octal.h"
#include "Decimal.h"
#include "Hex.h"
using namespace std;


int main() {



	 Octal o;
	 o.accept();
     o.print_it();

     Decimal d;
     d.accept();
     d.print_it();

     Hex h;
     h.accept();
     h.print_it();







	return 0;
}
