#pragma once

#include <stdint.h>
#include <iostream>
#include <string>

template <typename T >
class myVector
{
private:
	T m_vector;
	int capacity;
	int size;
	bool empty;
public:
	/* Constructor that initilize member variables */
	myVector(const T& vecT)
	{
		m_vector = vecT;
	}
	virtual ~myVector()
	{
		delete[] m_vector;
	}
	/* Function declaration */
	/**************************************************************************/
	T GetObj() { return m_vector; } /* return the object vector created on the stack*/ 
	bool clear();
	bool insert(T member);   /* Define as a template*/
	bool push_back(T element);
	bool pop_back(T element);
	bool resize();
	T operator[](const m_vector& other)const;
	T operator++(const m_vector& other)const;
	T operator--(const m_vector& other)const;
	T operator+=(const m_vector& member)const;
	T operator-=(const m_vector& member)const;
	T operator<<(const m_vector& member)const;
};
