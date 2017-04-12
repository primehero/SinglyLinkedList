/*
 * Llist.h
 *
 *  Created on: 13-Apr-2017
 *      Author: Rj
 */

#ifndef LLIST_H_
#define LLIST_H_


#include <iostream>
#include "RjExceptions.cpp"

template <typename T>
struct Node {
	Node<T> *next;
	T val;
};

/**
 * Creates a singly linked list with a **head** and a **last**. **head** will be
 * used to store the address of the first node ever created and the latest will
 * be stored in the last.
 */
template <typename T>
class Llist {
	// This will store the first node's address.
	Node<T> *head;
	// This is going to hold the latest node's address.
	Node<T> *last;

public:
	// CONSTRUCTOR
	Llist();
	// Adds a val to list.
	void add(T val);
	// Add object at given index.
	void add(int indx, T val);
	// Add to start.
	void add_front(T val);
	// Iterate.
	void iterate();
	// Reverse iterate.
	void iterate_reverse();
	// Get the element at index.
	T at(int indx);
	// Add object at given index.
	void update(int indx, T val);
	// Delete
	void remove(int indx);
	void pop_front();
	void pop_back();


};


#endif /* LLIST_H_ */
