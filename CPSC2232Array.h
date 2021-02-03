/*
 * This is the starter code for the Arrays C++ assignment
 * in CPSC 2232 for Fairfield University.
 * 
 * DO NOT ALTER THIS CODE!!
 * 
 * (c) Peter J. Kootsookos
 * 
 */
class CPSC2232Array 
{
	public:
		virtual int at(int index) = 0;
		virtual void set(int index, int value) = 0;
		virtual void insert(int index, int value) = 0;
		virtual void erase(int index) = 0;
		virtual bool empty() = 0;
		virtual int size() = 0;
};
