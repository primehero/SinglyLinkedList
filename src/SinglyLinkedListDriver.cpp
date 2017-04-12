//============================================================================
// Name        : SinglyLinkedListDriver.cpp
// Author      : Ramachandra jr
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================
#include "Llist.cpp"

int main() {
	Llist<char> mylist1{};
	mylist1.add('a');
	mylist1.add('c');
	mylist1.add('d');
	mylist1.iterate();
	std::cout << "====" << std::endl;

	mylist1.add(1, 'b');
	mylist1.add_front('o');
	mylist1.update(1, 'o');
	mylist1.iterate();
	std::cout << "====" << std::endl;

	mylist1.pop_front();
	mylist1.pop_back();
	mylist1.iterate();

	return 0;
}
