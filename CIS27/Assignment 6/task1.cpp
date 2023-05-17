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

void bubbleSort(float arr[]) {
    for(int i = 0; i < ARRAY_SIZE - 1; i++) {
        for(int j = 0; j < ARRAY_SIZE - i - 1; j++) {
            if(arr[j] > arr[j + 1]) {
                float temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
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
    time_elapsed = measureTime(bubbleSort, arr);
    cout << "Time elapsed: " << time_elapsed << " seconds" << endl;
    cout << "Sorted Array: ";
    printArray(arr);
    return 0;
}