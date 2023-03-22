#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ARRAY_SIZE = 1000;

void fillArray(int arr[]) {
    srand(time(0));
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = rand() % 1000 + 1;
    }
}

void printArray(int arr[]) {
    for (int i = 0; i < ARRAY_SIZE; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void sumOddNumbers(int arr[]) {
    int sum = 0;
    cout << "Odd intergers in the array: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] % 2 != 0) {
            cout << arr[i] << " ";
            sum += arr[i];
        }
    }
    cout << "\nSum of odd numbers: " << sum << endl;
}

void sumEvenNumbers(int arr[]) {
    int sum = 0;
    cout << "Even intergers in the array: " << endl;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] % 2 == 0) {
            cout << arr[i] << " ";
            sum += arr[i];
        }
    }
    cout << "\nSum of even numbers: " << sum << endl;
}

void searchArray(int arr[]) {
    int value;
    cout << "Enter a search value: ";
    cin >> value;
    bool found = false;
    for (int i = 0; i < ARRAY_SIZE; i++) {
        if (arr[i] == value) {
            found = true;
            cout << "Value found at location " << i << endl;
            break;
        }
    }
    if (!found) {
        cout << "Value is not in array." << endl;
    }
}

int main() {
    int arr[ARRAY_SIZE];
    fillArray(arr);
     int choice;
    do {
        cout << endl;
        cout << "Enter 1. Output all integer values" << endl;
        cout << "Enter 2. All odd numbers" << endl;
        cout << "Enter 3. All even numbers" << endl;
        cout << "Enter 4. Enter a search value" << endl;
        cout << "Enter 5: Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            printArray(arr);
            break;
        case 2:
            sumOddNumbers(arr);
            break;
        case 3:
            sumEvenNumbers(arr);
            break;
        case 4:
            searchArray(arr);
            break;
        case 5:
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
    } while (choice != 5);
    return 0;
}