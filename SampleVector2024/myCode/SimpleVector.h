/*
 * SimpleVector.h
 *
 *  Created on: 15 Jan 2025
 *      Author: charan
 */

#ifndef SIMPLEVECTOR_H_
#define SIMPLEVECTOR_H_

class SimpleVector {
private:
	int size;
	double* elements;
public:
	// if we specify the default value,
	// it will take when you won't specify
	//while you create and call an class object.
	// SimpleVector(int size)
	SimpleVector(int size = 5);
	~SimpleVector();
	void print() const;
};

#endif /* SIMPLEVECTOR_H_ */
