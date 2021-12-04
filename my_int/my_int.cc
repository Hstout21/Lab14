#include <iostream>
#include <stdbool.h>
#include <math.h>
#include "my_int.h"
using namespace std;

//Constructors.
my_int::my_int(int x) {
   val = x;
}
my_int::my_int() {
    val = 0;
}

//Setters.
void my_int::set(int x) {
   val = x;
}

//Output.
void my_int::output(ostream& fout) {
    fout<<" The value is equal to "<< val;
        while (val <= 1) {
            cout<<"Entered an Invalid value \n";
            cout<<"Enter a positive value greater than 1 \n";
            input(cin);
        }
}

//Prime checker (outside of class).
bool is_prime(const my_int& num) {
    double limit;
    int n;      //divisor
    bool prime= true;

    limit = sqrt(static_cast<int>(num.get_int()));

    n = 2;

    while (n <= limit && prime) {
        if (num.get_int() % n == 0) {
            prime = false;
        }
        else {
            n++;
        }
    }
    return prime;
}

//Input.
void my_int::input(istream& inp) {
    cout << "Enter a value: ";
    inp>>val;
}

//Getters.
int my_int::get_int() const {
   return val;  
}

//Operator overload.
bool operator == (const my_int &value1, const my_int &value2) {
    if (value1.get_int() == value2.get_int()) {
        return true;
    }
    return false;
}