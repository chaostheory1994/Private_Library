/*
 * LinkedList.cpp
 *
 *  Created on: Jun 3, 2014
 *      Author: jacob
 */

#include "LinkedList.h"

LinkedList::LinkedList() {
	// TODO Auto-generated constructor stub
	first = NULL;
	curr = NULL;
	last = NULL;
	msize = 0;
}

LinkedList::LinkedList(T* array, int length){
	if(length == 0) LinkedList();
	else{
		msize = length;
		first = new Node();

	}
}

LinkedList::~LinkedList() {
	// TODO Auto-generated destructor stub
}

template<typename T> void LinkedList<T>::addFirst(T item)
{
}



template<typename T> void LinkedList<T>::addLast(T item)
{
}



template<typename T> void LinkedList<T>::add(int index, T *item)
{
}



template<typename T> void LinkedList<T>::clear()
{
}



template<typename T> T *LinkedList<T>::element()
{
}



template<typename T> T *LinkedList<T>::get(int index)
{
}



template<typename T> T *LinkedList<T>::getFirst()
{
}



template<typename T> T *LinkedList<T>::getLast()
{
}



template<typename T> int LinkedList<T>::indexOf(T *item)
{
}



template<typename T> int LinkedList<T>::lastIndexOf(T *item)
{
}



template<typename T> bool LinkedList<T>::hasNext()
{
}



template<typename T> T *LinkedList<T>::next()
{
}



template<typename T> T *LinkedList<T>::toArray(int & size)
{
}



template<typename T> void LinkedList<T>::toArray(T *ptr, int size)
{
}



template<typename T> int LinkedList<T>::size()
{
}

template<typename T> T *LinkedList<T>::set(int index, T *ptr)
{
}

