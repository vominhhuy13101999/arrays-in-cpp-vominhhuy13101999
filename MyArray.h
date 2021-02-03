/*
 * This is the starter code for the Arrays C++ assignment
 * in CPSC 2232 for Fairfield University.
 * 
 * DO NOT ALTER THIS CODE!!
 * 
 * (c) Peter J. Kootsookos
 * 
 */
#include "CPSC2232Array.h"

class MyArray : CPSC2232Array
{
	private:
		int *array;
	public:
		MyArray();
		int at(int index);
		void set(int index, int value);
		void insert(int index, int value);
		void erase(int index);
		bool empty();
		int size();
};
