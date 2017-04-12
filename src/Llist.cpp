/*
 * Llist.cpp
 *
 *  Created on: 13-Apr-2017
 *      Author: Rj
 */

#include "Llist.h"

/**
 * Constructor function
 * This function Initializes head and last to NULL.
 */
template <typename T>
Llist<T>::Llist() : head{ NULL }, last{ NULL }
{};

/**
 * Adds a val to the list.
 * @param { T } val - val of the object to add.
 */
template <typename T>
void Llist<T>::add(T val) {
	// If it is the first node
	// Just normal initializing does not produce new objects every time the method is
	// called.
	Node<T> *nd1 = new Node<T>;
	nd1->next = NULL;
	if (head == NULL) {
		head = nd1;
	}
	else {
		last->next = nd1;
	}
	nd1->val = val;
	last = nd1;
};

/**
 * @Overload
 * Add given object at a given index.
 * @param { int } indx - Index to append at.
 * @param { T } val - Object to append.
 */
template <typename T>
void Llist<T>::add(int indx, T val) {
	Node<T> *temp1{ head };
	Node<T> *temp2{ NULL };
	int i{ 0 };
	do {
		if (i == indx && i != 0) {
			Node<T> *nd1 = new Node<T>;
			// Copy Previous one's.
			nd1->next = temp1;
			nd1->val = val;
			temp2->next = nd1;
		}
		++i;
		temp2 = temp1;
		temp1 = temp1->next;
	} while(temp1 != NULL);
}


/**
 * Iterates over the list from start to end and prints to the screen.
 */
template <typename T>
void Llist<T>::iterate() {
	if (head == NULL) {
		list_un_inited err;
		throw err;
	}
	// Iterate through the list until you hit a NULL.
	Node<T> *temp{ head };
	do {
		std::cout << temp->val << std::endl;
		temp = temp->next;
	} while(temp != NULL);
};

/**
 * Returns the object at the given index.
 * @param { int } indx - Index of the object to get.
 */
template <typename T>
T Llist<T>::at(int indx) {
	Node<T> *temp{ head };
	int i{ 0 };
	do {
		if (i == indx) {
			return temp->val;
		}
		++i;
		temp = temp->next;
	} while(temp != NULL);
	out_of_bounds_index err;
	throw err;
}

/**
 * Adds an object to the start of an array.
 * @param { T } val - Object to add.
 */
template <typename T>
void Llist<T>::add_front(T val) {
	// Create a new node.
	Node<T> *nd1 = new Node<T>;
	// Set its prev to NULL.
	nd1->next = head;
	nd1->val = val;
	// Change others
	head = nd1;
};

/**
 * Adds an object to the start of an array.
 * @param { int } indx - Index of object to change.
 * @param { T } val - Object to change index to.
 */
template <typename T>
void Llist<T>::update(int indx, T val) {
	Node<T> *temp{ head };
	int i{ 0 };
	do {
		if (i == indx) {
			temp->val = val;
		}
		++i;
		temp = temp->next;
	} while(temp != NULL);
};

/**
 * Deletes an object at given index
 * @param { int } indx - Index of object to remove.
 */
template <typename T>
void Llist<T>::remove(int indx) {
	Node<T> *temp1{ head };
	Node<T> *temp2{ NULL };
	int i{ 0 };
	do {
		if (i != 0 && i == indx) {
			temp2->next = temp1->next;
		}
		++i;
		temp2 = temp1;
		temp1 = temp1->next;
	} while(temp1 != NULL);
	temp2->next = NULL;
};

/**
 * Deletes the first element of the array.
 */
template <typename T>
void Llist<T>::pop_front() {
	head = head->next;
};

/**
 * Deletes the last element of an array.
 */
template <typename T>
void Llist<T>::pop_back() {
	Node<T> *temp1{ head };
	Node<T> *temp2{ NULL };
	do {
		temp2 = temp1;
		temp1 = temp1->next;
	} while(temp1->next != NULL);
	temp2->next = NULL;
};

