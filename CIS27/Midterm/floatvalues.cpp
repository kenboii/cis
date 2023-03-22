#include <iostream>
#include <fstream>
#include <iomanip>
#include "class.h"


using namespace std;

    Float_Values::Float_Values() {
        ifstream myfile ("floatvalues-1.txt.txt");
        if (myfile.is_open()) {
         float num;
            int i;
            while (myfile >> num) 
            {
               arr[i] = num;
               ++i;
            }

            myfile.close();
        }
    }

    Float_Values::~Float_Values(){}

    void Float_Values::sumAllNumbers(){
        float sum = 0;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            sum += arr[i];

        }
        cout << "\nSum of all numbers: " << setprecision(2)
        << fixed << sum << endl;
    }

    void Float_Values::highestValue() {
        float max = arr[0];
        int index = -1;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            if (max < arr[i]) {
                max = arr[i];
                index = i;
            }
        }
        cout << "\nHighest value in the array is " << setprecision(2)
        << fixed << max ;
        cout << " and it's index is " << index << endl;
    }

    void Float_Values::lowestValue() {
        float min = arr[0];
        int index = -1;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            if (min > arr[i]) {
                min = arr[i];
                index = i;
            }
        }
        cout << "\nLowest value in the array is " << setprecision(2)
        << fixed << min ;
        cout << " and it's index is " << index << endl;
    }

    void Float_Values::meanValue() {
        float sum = 0;
        for (int i = 0; i < ARRAY_SIZE; i++) {
            sum += arr[i];
        }
        float mean = sum / ARRAY_SIZE;
        cout << "\nMean values " << setprecision(2) 
        << fixed << mean << endl;
    }

    void Float_Values::modeValue() {
        int mode = arr[0];
        int count = 1;
        int maxCount = 1;

        for (int i = 1; i < ARRAY_SIZE; i++) {
            if (arr[i] == arr[i - 1]) {
                count++;
            } else {
                if (count > maxCount) {
                    maxCount = count;
                    mode = arr[i- 1];
                }
            }
            count = 1;
        }

        if (count > maxCount) {
            maxCount = count;
            mode = arr[ARRAY_SIZE - 1];
        }
        cout << "\nMode value: " << setprecision(2)
        << fixed << mode << endl;

    }

    void Float_Values::medianValue() {
        bubbleSort();
        float median;
        if (ARRAY_SIZE % 2 == 0) {
            median = (arr[ARRAY_SIZE/2 - 1] + arr[ARRAY_SIZE/2]) / 2.0;
        } else {
            median = arr[ARRAY_SIZE/2];
        }
        cout << "\nMedian value: " << setprecision(2) << fixed << median << endl;
    }

    void Float_Values::bubbleSort() {
        for (int i = 0; i < ARRAY_SIZE - 1; i++) {
            for (int j = 0; j < ARRAY_SIZE - i - 1; j++) {
                if (arr[j] > arr[j+ 1]) {
                    float temp = arr[j];
                    arr[j] = arr[j + 1];
                    arr[j + 1] = temp;
                }
            }
        }
    }
