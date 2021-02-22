/*
 * This is the starter code for the Arrays C++ assignment
 * in CPSC 2232 for Fairfield University.
 * 
 * This is what you need to implement.
 * 
 * (c) Peter J. Kootsookos
 * 
 */
#include "MyArray.h"
#include <iostream>

#include <vector>
using namespace std;

MyArray::MyArray()
{
	len=10;
	
	array = (int*)malloc(len*sizeof(int))  ;






	// TODO: Implement!
}

int MyArray::at(int index)
{
	// TODO: Implement!

	return array[index];

}

void MyArray::set(int index, int value)
{
	// TODO: Implement!
  array[index]=value;
}

void MyArray::insert(int index, int value)
{
	if (len<index){
		len=2*len;
		array =(int*)realloc((void*)array,len);
		array[index]=value;
	}

	else if (array[index]==0){
		array[index]=value;
		
	}
	else{
		int store;
		int num=array[index];
		array[index]=value;
		for (int i =index+1;i<len;i++){
				store=array[i];
				array[i]=num;
				num=store;
		}

		
		// for (int i =0;i<)
	}

	
	

}

void MyArray::erase(int index){
	// array->erase(array->begin()+index);
  int num=array[index+1];
  array[len-1]=0;
  for (int i =index+1;i<len-1;i++){
      array[i-1]=num;
      num=array[i+1];
      


}}


bool MyArray::empty()
{
	// TODO: Implement!
	//return this.array.empty();
	// return array->empty();
	for (int i=0; i<len; i++){
		if (array[i]!=0){
			return false;
		}

	}
	return true;
}

int MyArray::size()
{
	return len;
	
}
