//============================================================================
// Name        :
// Author      : Bonnie Bell
// Version     :
// Copyright   : Your copyright notice
// Description : Basic searching examples
//============================================================================

#include <fstream>
#include <iostream>
#include <time.h>

#include "SortTester.h"

using namespace std;

bool singleBubblePass(SortTester &tester, unsigned int size, unsigned int passNum) {
	bool sorted = true;
// Insert your code here 
// outter loop to loop through array every pass
for (int i = 0; i < size; i++){
    //inner loop to compare/swap elements
	for (int j = 0; j < size - 1 - i; j++) {
		//check to see if passNum is even 
		if(passNum % 2 == 0){
			//even pass, call compare to compare low to high
			if(tester.compare(tester[j], tester[j +1]) > 0) {
				// call swap function to sort low to high
				tester.swap(tester[j], tester[j + 1]);
				sorted = false;
			}
		} else { // odd pass, compare high to low
			// call compare
			if (tester.compare(tester[j], tester[j + 1]) < 0){
				// call swap
				tester.swap(tester[j], tester[j + 1]);
				sorted = false;
			} // end if

		}// end if/else

			
		
	} // end inner for loop
   }// end outer for loop
//
	return sorted;
}

int main() {
	unsigned int size = 10;
	SortTester tester = SortTester(size);
	cout<<"Unsorted"<<endl;
	tester.print();
	bool sorted = false;
	unsigned int numPasses = 0;
	while (not sorted) {
		sorted = true;
		numPasses++;
		sorted = singleBubblePass(tester, size, numPasses); //this is the function you are defining
   }
   tester.print();
}
