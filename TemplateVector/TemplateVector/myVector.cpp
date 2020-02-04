#include "myVector.h"

	template <typename T>
	myVector<T> myVector<T>::getObj()
	{
		 return this->m_vector; 
	}
	template <typename T>
	int myVector<T>::getCapacity()
	{
		return this->capacity;
	}
	template <typename T>
	bool myVector<T>::clear()
	{
		for (int i = 0; i < size; i++)
		{
			m_vector[i] = NULL;
		}
		return true;
	}
	template <typename T>
	bool myVector<T>::insert(T data, int index)   
	{
		if (index == capacity)
			push(data);
		else
			m_vector[index] = data;
		if (m_vector[index] == nullptr)
		{
			return EXIT_FAILURE;
		}
		else
		{
			return true;
		}
	}
	/************************************************************************** 
	*	Add an element at last
	*
	*
	*
	*
	***************************************************************************/
	template <typename T>
	bool myVector<T>::push_back(T element)
	{
		bool IsAdded = false;
		/* Check if we have enough space */
		if (size == capacity)
		{
			myVector <T>* temp = new myVector<T>[2 * capacity];
			if (temp == nullptr)
			{
				return EXIT_FAILURE;
			}
			for (int i = 0; i < capacity; i++)
			{
				temp[i] = m_vector[i];
			}

			delete[] m_vector;
			capacity *= 2;
			m_vector = temp;
		}

		m_vector[size] = element;
		if (m_vector != nullptr)
		{
			IsAdded = true;
			size++;
		}
		
		return IsAdded;
	}
	/**************************************************************************
	*
	*
	*
	*
	*
	***************************************************************************/
	template <typename T>
	bool myVector<T>::pop_back()
	{
		m_vector[size] = NULL;
		size--;
		return true;
	}
	/**************************************************************************
	*
	*
	*
	*
	*
	***************************************************************************/
	template <typename T>
	bool myVector<T>::resize()
	{
		if (capacity > size)
			capacity = size;
		return true;
	}

	/**************************************************************************
	*
	*
	*
	*
	*
	***************************************************************************/
	template <typename T>
	myVector<T> myVector<T>::operator[](int index )
	{
		if (index > size)
		{
			std::cout << "Index out of bound" << std::endl;
		}
		else 
		{
			return m_vector[index];
		}
	}
	/**************************************************************************
	*
	*
	*
	*
	*
	***************************************************************************/
	template <typename T>
	myVector<T> myVector<T>::operator++(T m_vector)
	{
		return 0;
	}
	/**************************************************************************
	*
	*
	*
	*
	*
	***************************************************************************/
	template <typename T>
	myVector<T> myVector<T>::operator--(T m_vector )
	{
		return 0;
	}
	/**************************************************************************
	*
	*
	*
	***************************************************************************/
	template <typename T>
	myVector<T> myVector<T>::operator+=(T m_vector)
	{
		return 0;
	}
	/**************************************************************************
	*
	*
	*
	***************************************************************************/
	template <typename T>
	myVector<T> myVector<T>::operator-=(T m_vector)
	{
		return 0;
	}
	/**************************************************************************
	*
	*
	*
	***************************************************************************/
	template <typename T>
	std::ostream & operator<<(std::ostream & os,const myVector<T> vec)
	{
		//os << vec[]
	}
