#include <iostream>
using namespace std;



int main () {
    int number;
    char letter;
    char capLetter;
    int difference = 'a' - 'A';

    cout << "Enter a number: ";
    cin >> number;
    if(number & 01) {
        cout << number << " is odd \n";
    }else {
        cout << number << " is even \n";
    }

    cout << "Enter an uppercase letter: ";
    cin >> capLetter;
    letter = capLetter | 0b00100000;
    cout << capLetter << " " << letter << endl;


    return 0;
}