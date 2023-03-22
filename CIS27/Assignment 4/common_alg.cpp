#include "class.h"
#include <iostream>
#include <fstream>

using namespace std;

    Common_Alg::Common_Alg() {                     
        // class constructor
        arr = new int[ARRAY_SIZE];
        ifstream myfile ("C://Users//yuken//Desktop//CIS27//Assignment 3//random_ints.txt");
        if (myfile.is_open()) {
            int number;
            int i = 0;
            while ( myfile >> number )
            {
                arr[i] = number;
                ++i;
            }

            myfile.close();
        }
    }
    Common_Alg::~Common_Alg() {
        // Destructor
        delete[] arr;
    }
    //function to print all numbers
    void Common_Alg::printArray() {
        for (int i = 0; i < ARRAY_SIZE; i++) {
          cout << arr[i] << " ";
        }
        cout << endl;
    }
    //function to add all numbers
    void Common_Alg::sumAllNumbers() {
        int sum = 0;
        for (int i = 0; i < ARRAY_SIZE; i++) {
              sum += arr[i];
        }
        cout << "\nSum of all numbers: " << sum << endl;
    }
    //function to print all odd numbers in the array
    void Common_Alg::outputOddNumbers() {
        int sum = 0;
        cout << "\nOdd intergers in the array: \n" << endl;
        for (int i = 0; i < ARRAY_SIZE; i++) {
          if (arr[i] % 2 != 0) {
              cout << arr[i] << " ";
          }
        }
    }
    //function to print out all even numbers in the array
    void Common_Alg::outputEvenNumbers() {
        int sum = 0;
        cout << "\nEven intergers in the array: \n" << endl;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            if (arr[i] % 2 == 0) {
                cout << arr[i] << " ";
            }
        }
    }

    //display middle value function
    void Common_Alg::middleValue() {
        cout << "\nMiddle value of the array: " << arr[499] << endl; 
    }

    //display first value function
    void Common_Alg::firstValue() {
        cout << "\nFirst value of the array " << arr[0] << endl;
    }

    //display last value function
    void Common_Alg::lastValue(){
        cout << "\nLast value of the array " << arr[999] << endl;
    }

    //function to output highest/max value
    void Common_Alg::highestValue() {
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
    void Common_Alg::lowestValue() {
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
    void Common_Alg::bubbleSort() {
        for (int i = 0; i < ARRAY_SIZE - 1; i++) {
        for (int j = 0; i < ARRAY_SIZE - j - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;  }  
            }  
        }
    }

    int Common_Alg::binarySearch(int arr[], int low, int high, int x) {
        while(low <= high) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == x)
                return mid;

            if (arr[mid] < x)
                low = mid + 1;

            else
                high = mid - 1;
        }

        return -1;
    }

    //function to search for a value found or not found in array
    void Common_Alg::searchArray() {
        int value;
        cout << "\nEnter a search value: ";
        cin >> value;

        bubbleSort(); //Have to sort array in order for binary search to work

        int index = binarySearch(arr, 0, ARRAY_SIZE-1, value);

        if (index != -1) {
            cout << "\nValue found at location " << index << endl;
        } else {
            cout << "\nValue is not in array." << endl;
        }
            
    }