#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

const int ARRAY_SIZE = 10000;
float arr[ARRAY_SIZE];

void fillArray(float arr[]) {
    srand(time(0));
    for (int i = 0; i < ARRAY_SIZE; i++) {
        arr[i] = ((float)rand()/(float)RAND_MAX) * 999 + 1;
    }
}

void insertionSort(float arr[]) {
    for(int j = 1; j < ARRAY_SIZE; j++) {
       float key = arr[j];
       int i = j - 1;

       while (key < arr[i] && i >= 0) {
            arr[i + 1] = arr[i];
            --i;
       }
       arr[i + 1] = key;
    }
}

void printArray(float arr[]) {
    for(int i = 0; i < ARRAY_SIZE; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

double measureTime(void (*func)(float[]), float arr[]) {
    clock_t start = clock();
    func(arr);
    clock_t end = clock();
    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    return elapsed_time;
}

int main() {
    double time_elapsed;
    fillArray(arr);
    time_elapsed = measureTime(insertionSort, arr);
    cout << "Time elapsed: " << time_elapsed << " seconds" << endl;
    cout << "Sorted Array: ";
    printArray(arr);
    return 0;
}