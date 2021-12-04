#include <iostream>
#include <stdbool.h>
#include <math.h>
#include "my_int.h"
using namespace std;

//*********************************************************
// Function: is_prime
// Purpose: object num contains a valid positive value
//           returns true if num is prime; otherwise
//           returns false
// Params:   num - the value to be checked for prime
// Calls:    sqrt
// Uses:     cmath
//*********************************************************
bool is_prime(const my_int& num);

int main() {
   my_int value1;
   my_int value2;

   //Value 1 input.
   value1.input(cin);
   value1.output(cout);
   if (is_prime(value1)) {
      cout<<" is a prime number \n";
   }
   else {
      cout<<" is not a prime number \n";
   }

   //Value 2 input
   value2.input(cin);
   value2.output(cout);
   if (is_prime(value2)) {
      cout<<" is a prime number \n";
   }
   else {
      cout<<" is not a prime number \n";
   }

   //Testing operator overloading.
   if (value1 == value2) {
      cout << endl << "Value 1 & 2 are equal" << endl;
   }
   else {
      cout << endl << "Value 1 & 2 are not equal" << endl;
   }
return 0;
}
