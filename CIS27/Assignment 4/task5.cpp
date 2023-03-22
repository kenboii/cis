#include <iostream>
#include "class.h"

using namespace std;

int main() {
    //object constructor
    Common_Alg comArr;
    int choice;
    do {
        cout << endl;
        cout << "Enter 1. Output all integer values" << endl;
        cout << "Enter 2. Sum of all values" << endl;
        cout << "Enter 3. All odd numbers" << endl;
        cout << "Enter 4. All even numbers" << endl;
        cout << "Enter 5. Enter a search value" << endl;
        cout << "Enter 6: Output the middle value" << endl;
        cout << "Enter 7: Output the first value" << endl;
        cout << "Enter 8: Output the last value" << endl;
        cout << "Enter 9: Output the highest value " << endl;
        cout << "Enter 10: Output the lowest value " << endl;
        cout << "Enter 11: Bubble Sort " << endl;
        cout << "Enter 12: Exit " << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            comArr.printArray();
            break;
        case 2:
            comArr.sumAllNumbers();
            break;
        case 3:
            comArr.outputOddNumbers();
            break;
        case 4:
            comArr.outputEvenNumbers();
            break;
        case 5:
            comArr.searchArray();
            break;
        case 6:
            comArr.middleValue();
            break;
        case 7:
            comArr.firstValue();
            break;
        case 8:
            comArr.lastValue();
            break;
        case 9:
            comArr.highestValue();
            break;
        case 10:
            comArr.lowestValue();
            break;
        case 11:
            comArr.bubbleSort();
            cout << "Sorted array: " << endl;
            comArr.printArray();
            break;
        case 12:
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
    } while (choice != 12);
    return 0;
}