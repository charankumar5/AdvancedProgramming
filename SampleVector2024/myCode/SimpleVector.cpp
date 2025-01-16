/*
 * SimpleVector.cpp
 *
 *  Created on: 15 Jan 2025
 *      Author: charan
 */
#include <iostream>
#include <cstdlib>
#include "SimpleVector.h"


SimpleVector::SimpleVector(int size): size{size}{
	// we have the same name for parameter of constructor and attribute.
	this->size = size;

	// we are assigning a memory for elements pointer.
	elements = new double [size];

}

//// another way initialise the attributes.
//SimpleVector::SimpleVector(int size){
//	// we have the same name for parameter of constructor and attribute.
//	this->size = size;
//	elements = new double [size];
//
//}
void SimpleVector::print() const
{
	std::cout << "Hello Vector is working." << std::endl;

	for (int i=0; i<=size; i++) {
		std::cout << elements[i] << std::endl;
	}
}

// deallocate the memory of elements pointer.
// if this is a just variable,
// assign memory: int* p = new int;
// return memory: delete p

// at each time you call the class constructor automatically called.
// above constructor each time allocates memory for elements pointer.
// from the for loop in main.cpp, it will assign 100 memory locations
// for 100 iterations.
// if Destructor also called for each iteration,
// Destructor release the memory and at each iteration memory address would be same.
// otherwise, memory address would be changed and may not released back.
SimpleVector::~SimpleVector(){
	delete [] elements;
}
