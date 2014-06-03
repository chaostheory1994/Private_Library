/*
 * Iterator.h
 *
 *  Created on: Jun 3, 2014
 *      Author: jacob
 */

#ifndef ITERATOR_H_
#define ITERATOR_H_

template<typename T>
class Iterator {
public:
	virtual ~Iterator(){}
	virtual bool hasNext() = 0;
	virtual T* next() = 0;
};

#endif /* ITERATOR_H_ */
