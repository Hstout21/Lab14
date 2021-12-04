#ifndef MY_INT
#define MY_INT
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

//*********************************************************
// Function: bool operator
// Purpose: Overloads operator to find is value1 & 2 are equal.
// Params:   value 1 & 2 -- value inputs from the user.
// Calls:    none
// Uses:     my_int
//*********************************************************
friend bool operator == (const my_int &value1, const my_int &value2);

private:
int val; // Variable to hold value for class
};

#endif