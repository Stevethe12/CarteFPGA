#pragma once

#include <stdint.h>
#include <iostream>
#include <string>
#include <errno.h>

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
		// Est qu'on doit initialiser le tableau avec une valeur?
		m_vector = new T[1] ;
		m_vector[1] = NULL;
	}
	myVector(const myVector& copySource)
	{
		/*TODO*/
	}
	virtual ~myVector()
	{
		delete[] m_vector;
	}
	/* Function declaration */
	/**************************************************************************/
	myVector<T> getObj(); /* return the object vector created on the heap*/
	int getCapacity();
	bool clear();
	bool insert(T member, int index);   /* Define as a template*/
	bool push_back(T element);
	bool pop_back();
	bool resize();
	myVector<T> operator[](int index);
	myVector<T> operator++(T m_vector);
	myVector<T> operator--(T m_vector);
	myVector<T> operator+=(T m_vector);
	myVector<T> operator-=(T m_vector);
	friend std::ostream& operator<<(std::ostream& os, myVector<T> vec);
};
