#include <iostream>
using namespace std;

int sumNbrs(int number);

//Input: a whole number
//Process: add the numbers from 1 up to and including this number
//Output: the sum

int main(){
    int number;
    cout << "Enter a whole number: " << endl;
    cin >> number;
    cout << sumNbrs(number);
}// endMain

int sumNbrs(int number) {
    if (number <= 0){
        cout << " = ";
        return number;
    } else if (number == 1){
        cout << number;
        
    } else {
        cout << number << " + ";
    }

    return (number + sumNbrs(number -1));
}