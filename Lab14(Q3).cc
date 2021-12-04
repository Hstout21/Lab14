#include <iostream>
#include <stdbool.h>
#include <math.h>
using namespace std;

class my_int
{
public:
//*********************************************************
// Function: my_int
// Purpose: Constructor initializes the val to x
// Params:   x - the value for the val
// Calls:    none
// Uses:     none
//*********************************************************
my_int(int x);

//*********************************************************
// Function: my_int     
// Purpose: Constructor initializes the val to 0    
// Params:   none    
// Calls:    none                                  
// Uses:     none         
//*********************************************************
my_int();     

//*********************************************************
// Function: set
// Purpose: Sets the val to x
// Params:   x - the new value for the val
// Calls:    none
// Uses:     none
//*********************************************************
void set(int x);

//*********************************************************************
// Function: input
// Purpose: reads and stores a value from inp. if fin is a input
//           stream, then fin is already connected to a file.User enters
//           a value and ask the user to re-enter the data if the
//           user enters an incorrect value.
// Params:   inp -- the input stream
// Calls:    none
// Uses:     istream
//*********************************************************************
void input(istream& inp) ;

//*********************************************************************
// Function: output
// Purpose: display the val on fout. if fout is a output stream
//           then fout is already connected to a file
// Params:   fout -- the output stream
// Calls:    none
// Uses:     ostream
//*********************************************************************
void output(ostream& fout);

//*********************************************************
// Function: get_int
// Purpose: returns the val
// Params:   none
// Calls:    none
// Uses:     none
//*********************************************************
int get_int() const;

private:
int val; // Variable to hold value for class
};

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


int main()
{
my_int value1;
   
value1.input(cin);

value1.output(cout);

if (is_prime(value1))
    cout<<" is a prime number \n";
else
   cout<<" is not a prime number \n";

return 0;
}


//*********************************************************
// Function: my_int
// Purpose: Constructor initializes the val to x
// Params:   x - the value for the val
// Calls:    none
// Uses:     none
//*********************************************************
my_int::my_int(int x)
{
   val = x;
}

//*********************************************************
// Function: my_int     
// Purpose: Constructor initializes the val to 0    
// Params:   none    
// Calls:    none                                  
// Uses:     none         
//*********************************************************
my_int::my_int()
{
val = 0;
}


//*********************************************************
// Function: set
// Purpose: Sets the val to x
// Params:   x - the new value for the val
// Calls:    none
// Uses:     none
//*********************************************************
void my_int::set(int x)
{
   val = x;
}


//*********************************************************************
// Function: output
// Purpose: display the val on fout. if fout is a output stream
//           then fout is already connected to a file
// Params:   fout -- the output stream
// Calls:    none
// Uses:     ostream
//*********************************************************************
void my_int::output(ostream& fout) {
fout<<" The value is equal to "<< val;
   while (val <= 1)
   {
    cout<<"Entered an Invalid value \n";
    cout<<"Enter a positive value greater than 1 \n";
    input(cin);
   }
}

      
//*********************************************************
// Function: is_prime
// Purpose: object num contains a valid positive value
//           returns true if num is prime; otherwise
//           returns false
// Params:   num - the value to be checked for prime
// Calls:    sqrt
// Uses:     cmath
//*********************************************************
bool is_prime(const my_int& num)
{
double limit;
int n;      //divisor
bool prime= true;

limit = sqrt(static_cast<int>(num.get_int()));

n = 2;

while (n <= limit && prime)
{
    if (num.get_int() % n == 0)
     prime = false;
    else
     n++;
   }
   return prime;
}

void my_int::input(istream& inp) {

    inp>>val;
}

int my_int::get_int() const {
   //input(cin);
   return val;  
}
