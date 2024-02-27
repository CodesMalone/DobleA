#include <iostream>
using namespace std;

void PrintNumPattern(int num1, int num2);

int main() {
    //Input:: two numbers
    //Process: start at the first number, decrement by the second number
    //until we get to 0 or less and then increment until we get back to the first number.
    //Output: display the numbers decrementing and incrementing from 
    //the first number to 0 and back again.

    int num1, num2;

    cin >> num1;
    cin >> num2;
    PrintNumPattern(num1, num2);

    return 0;


} // end main

void PrintNumPattern (int n1, int n2){
    if (n1 <= 0) {
        cout << n1 << " ";
        return;
    } // end if

    cout << n1 << " ";
    PrintNumPattern (n1 - n2, n2);
    cout << n1 << " ";
} // end PrintNumPattern()