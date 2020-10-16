/* This is to correct the issues with the C example
* on p. 163 of _Hands on Ethical Hacking and
* Network Defense_, Third Edition.
*/

#include <stdio.h>
/* stdio.h is required for basic input/output */

/* functions used need to have a declaration before
* main() and before they are written.
*/
void GetOut(void);
// this specifies the return type and arguments

// functions need a return type, main() is 
// almost always 'int'

int main(void)
{
	int a = 1;
	// The curly braces aren't required for a 
	// one line if statement, but the semicolon
	// after the conditional is a syntax error
	if (a > 2) 
	{
		printf("a is treater than 2\n");
		// \n is required for newline after output
	}
	else
	{
		GetOut();
	}
	
	// this is how the program shows it is completely
	// successfully.  return 0 is normal execution in main()
	return (0);
}

/* The textbook has the GetOut() function defined
* within the main() function, however that is not 
* allowed within C
*/

// Since GetOut() does not return a value the type if 'void'
void GetOut()
{
	for (int a=1; a<11; a++)
	{
		printf("I'm in the GetOut() function\n");
	}
}
