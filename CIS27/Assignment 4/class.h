#ifndef COMMON_ALG_H
#define COMMON_ALG_H

class Common_Alg {  

public:
    Common_Alg();
    ~Common_Alg();
    void printArray();
    void sumAllNumbers();
    void outputOddNumbers();
    void outputEvenNumbers();
    void searchArray();
    void middleValue();
    void firstValue();
    void lastValue();
    void highestValue();
    void lowestValue();
    void bubbleSort();

private:
    static const int ARRAY_SIZE = 1000;
    int* arr;
    int binarySearch(int arr[], int low, int high, int x);
};

#endif
