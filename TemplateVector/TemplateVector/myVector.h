#pragma once

#include <stdint.h>
#include <iostream>
#include <string>

template <typename T1 >

class myVector
{
private:
	T1 m_vector;
	
public:
	/* Constructor that initilize member variables */
	myVector(const T1& vect1)
	{
		m_vector = vect1;
	}
	~myVector()
	{
		delete[] m_vector;
	}
	/* Function declaration */
	/**************************************************************************/
	T1 GetObj() { return vector1; } /* return the object vector created on the stack*/ 
	/* TODO*/
	/* Put all other function required for the APP here */


};
