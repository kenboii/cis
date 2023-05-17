#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;

const int ARRAY_SIZE = 10000;
float arr[ARRAY_SIZE];

void fillArray(float arr[]) {
    ifstream inputFile("ascending_mostly_sorted.txt");
    int i = 0;
    float number;
    while (inputFile >> number && i < ARRAY_SIZE) {
        arr[i] = number;
        ++i;
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
    cout << fixed << setprecision(6) << "Time elapsed: " << time_elapsed << " seconds" << endl;
    return 0;
}