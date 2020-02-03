#pragma once

#include <stdint.h>
#include <iostream>
#include <string>

template <typename T >
class myVector
{
private:
	T *m_vector;
	int capacity = 1;
	int size = 0;
	bool empty = false;
public:
	/* Constructor that initilize member variables */
	myVector()
	{
		m_vector = new T[1] ;
	}
	virtual ~myVector()
	{
		delete[] m_vector;
	}
	/* Function declaration */
	/**************************************************************************/
	myVector<T> getObj(); /* return the object vector created on the stack*/
	int getCapacity(myVector<T>  *m_vector);
	bool clear();
	bool insert(T member);   /* Define as a template*/
	bool push_back(T element);
	bool pop_back(T element);
	bool resize();
	myVector<T> operator[](T m_vector);
	myVector<T> operator++(T m_vector);
	myVector<T> operator--(T m_vector);
	myVector<T> operator+=(T m_vector);
	myVector<T> operator-=(T m_vector);
	myVector<T> operator<<(T m_vector);
};
