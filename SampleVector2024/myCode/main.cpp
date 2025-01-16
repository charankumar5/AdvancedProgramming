// Standard (system) header files
#include <iostream>
#include <cstdlib>
// Add more standard header files as required
// #include <string>

using namespace std;

// Add your project's header files here
// #include "CFraction.h"
#include "SimpleVector.h"

// Main program
int main (void)
{
    // TODO: Add your program code here
	cout << "SampleVector2024 started." << endl << endl;


	for (int i = 0; i<= 100; i++){
		// create an object of the class.
		SimpleVector myVector(100);
		// access the class method through class object.
		myVector.print();
	}





	return 0;
}
