/*
 * This is the starter code for the Arrays C++ assignment
 * in CPSC 2232 for Fairfield University.
 * 
 * DO NOT ALTER THIS CODE!!
 * 
 * (c) Peter J. Kootsookos
 * 
 */
#include <iostream>
#include "MyArray.h"
using namespace std;

int main()
{
    MyArray array;
    int number;
    cin >> number; 
    cout << number << endl;
    cout << array.empty() << endl; //1 [true comes out as 1 in C++]
    cout << array.size() << endl;  //0
    array.insert(0,10); // [10]
    cout << array.at(0) << endl; //10
    array.insert(1,11); // [10,11]
    cout << array.at(0) << endl; //10
    cout << array.at(1) << endl; //11
    cout << array.empty() << endl; //0
    cout << array.size() << endl;  //2
    array.erase(0); //[11]
    cout << array.at(0) << endl; //11
    array.set(0,12);
    cout << array.at(0) << endl; //12
    array.erase(0); // []
    cout << array.empty() << endl; //1
    cout << array.size() << endl;  //0

    return 0;
}
