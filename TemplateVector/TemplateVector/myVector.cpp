#include "myVector.h"

	template <typename T>
	myVector<T> myVector<T>::getObj()
	{
		 return this->m_vector; 
	}
	template <typename T>
	bool myVector<T>::clear()
	{
		return true;
	}
	template <typename T>
	bool myVector<T>::insert(T member)   /* Define as a template*/
	{
		return true;
	}
	template <typename T>
	bool myVector<T>::push_back(T element)
	{
		return true;
	}
	template <typename T>
	bool myVector<T>::pop_back(T element)
	{
		return true;
	}
	template <typename T>
	bool myVector<T>::resize()
	{
		return true;
	}
	template <typename T>
	myVector<T> myVector<T>::operator[](T  m_vector )
	{
		return 0;
	}
	template <typename T>
	myVector<T> myVector<T>::operator++(T m_vector)
	{
		return 0;
	}
	template <typename T>
	myVector<T> myVector<T>::operator--(T m_vector )
	{
		return 0;
	}
	template <typename T>
	myVector<T> myVector<T>::operator+=(T m_vector)
	{
		return 0;
	}
	template <typename T>
	myVector<T> myVector<T>::operator-=(T m_vector)
	{
		return 0;
	}
	template <typename T>
	myVector<T> myVector<T>::operator<<(T m_vector)
	{
		return 0;
	}


