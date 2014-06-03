/*
 * LinkedList.h
 *
 *  Created on: Jun 3, 2014
 *      Author: jacob
 */

#ifndef LINKEDLIST_H_
#define LINKEDLIST_H_
#include "Iterator.h"

template<typename T>
class LinkedList : public Iterator<T>{
public:
	LinkedList();
	LinkedList(T*, int);
	virtual ~LinkedList();
	int size();
	void addFirst(T*);
	void addLast(T*);
	void add(int, T*);
	void clear();
	T* element();
	T* get(int);
	T* getFirst();
	T* getLast();
	int indexOf(T*);
	int lastIndexOf(T*);
	bool hasNext();
	T* next();
	T* toArray(int&);
	void toArray(T*, int);
	T* set(int, T*);

private:
	struct Node{
		T* data;
		Node* next;
		Node* prev;
	};
	int msize;
	Node* first;
	Node* last;
	Node* curr;
};


#endif /* LINKEDLIST_H_ */
