// ListProcessor.cpp

// Hunter Jones - COSC2030 - Lab #2
// Exercise the List class with verbose Node constructor
//   and destructor.

#include <iostream>
using namespace std;

#include "LinkedList.h"


int main()
{
	// Begin HJ code
	
	List empty;
	// Checking size of empty list. Expect 0:
	cout << "This empty list has " << empty.size() << " elements." << endl;
	// Checking the sum of empty list. Expect 0:
	cout << "The sum of this list sums to " << empty.sum() << endl;
	// Testing insertAsLast with no previous elements
	empty.insertAsLast(4.3);
	cout << "(non-)empty list now: " << empty << endl;
	// Checking size of list with 1 element. Expect 1:
	cout << "This (non-)empty list has " << empty.size() << " elements." << endl;
	// Testing insertAsLast with an existing previous element
	empty.insertAsLast(80.1);
	empty.insertAsLast(40.2);
	cout << "(non-) empty list now: " << empty << endl;
	// Testing size of list with 3 elements. Expect 3:
	cout << "This (non-)empty list has " << empty.size() << " elements." << endl;
	// Checking the sum of this list. Expect 124.6:
	cout << "This (non-)empty list sums to " << empty.sum() << endl;
	
	// End HJ code
	
	List cows;
	cout << "cows list  :  " << cows << endl << endl;

	cows.insertAsFirst(1.23);
	cows.insertAsFirst(2.34);
	cout << "cows list  :  " << cows << endl << endl;

	cows.removeFirst();
	cout << "cows list  :  " << cows << endl << endl;

	List horses(cows);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	horses.removeFirst();
	horses.insertAsFirst(5.67);
	cows.insertAsFirst(6.78);
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl << endl;

	List pigs;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = cows;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	pigs = horses;
	cout << "cows list  :  " << cows << endl;
	cout << "horses list:  " << horses << endl;
	cout << "pigs list  :  " << pigs << endl << endl;

	cout << "End of code" << endl;

	return 0;
}
