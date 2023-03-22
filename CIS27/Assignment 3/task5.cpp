#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

class Common_Alg {  

public:
    Common_Alg() {                     
        // class constructor
        ifstream myfile ("random_ints.txt");
        if (myfile.is_open()) {
            int number;
            int i;
            while ( myfile >> number )
            {
                arr[i] = number;
                ++i;
            }

            myfile.close();
        }
    }
    ~Common_Alg() {
        // Destructor
    }
    //function to print all numbers
    void printArray() {
        for (int i = 0; i < ARRAY_SIZE; i++) {
          cout << arr[i] << " ";
        }
        cout << endl;
    }
    //function to add all numbers
    void sumAllNumbers() {
        int sum = 0;
        for (int i = 0; i < ARRAY_SIZE; i++) {
              sum += arr[i];
        }
        cout << "\nSum of all numbers: " << sum << endl;
    }
    //function to print all odd numbers in the array
    void outputOddNumbers() {
        int sum = 0;
        cout << "\nOdd intergers in the array: \n" << endl;
        for (int i = 0; i < ARRAY_SIZE; i++) {
          if (arr[i] % 2 != 0) {
              cout << arr[i] << " ";
          }
        }
    }
    //function to print out all even numbers in the array
    void outputEvenNumbers() {
        int sum = 0;
        cout << "\nEven intergers in the array: \n" << endl;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            if (arr[i] % 2 == 0) {
                cout << arr[i] << " ";
            }
        }
    }
    //function to search for a value found or not found in array
    void searchArray() {
        int value;
        cout << "\nEnter a search value: ";
        cin >> value;
        bool found = false;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            if (arr[i] == value) {
                found = true;
                cout << "\nValue found at location " << i << endl;
                break;
            }
        }
        if (!found) {
            cout << "\nValue is not in array." << endl;
        }
    }

    //display middle value function
    void middleValue() {
        cout << "\nMiddle value of the array: " << arr[499] << endl; 
    }

    //display first value function
    void firstValue() {
        cout << "\nFirst value of the array " << arr[0] << endl;
    }

    //display last value function
    void lastValue(){
        cout << "\nLast value of the array " << arr[999] << endl;
    }

    //function to output highest/max value
    void highestValue() {
        int max = arr[0];
        int index = -1;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            if (max < arr[i]) {
                max = arr[i];
                index = i;
            }
        }
        cout << "\nHighest value in the array is " << max ;
        cout << " and it's index is " << index << endl;
    }

    //function to display lowest/min value
    void lowestValue() {
        int min = arr[0];
        int index = -1;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            if (min > arr[i]) {
                min = arr[i];
                index = i;
            }
        }
        cout << "\nLowest value in the array is " << min ;
        cout << " and it's index is " << index << endl;
    }

    //function to sort the array 
    void bubbleSort() {
        for (int step = 0; step < ARRAY_SIZE; step++) {
        for (int i = 0; i < ARRAY_SIZE - step; i++) {
            if (arr[i] > arr[i + 1]) {
                int temp = arr[i];
                 arr[i] = arr[i + 1];
                arr[i + 1] = temp;  }  
            }  
        }
    }

    private:
    static const int ARRAY_SIZE = 1000;
    int arr[ARRAY_SIZE];
};

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