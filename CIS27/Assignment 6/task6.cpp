#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <iomanip>

using namespace std;

const int ARRAY_SIZE = 10000;
float arr[ARRAY_SIZE];

void fillArray(float arr[]) {
    ifstream inputFile("descending_mostly_sorted.txt");
    int i = 0;
    float number;
    while (inputFile >> number && i < ARRAY_SIZE) {
        arr[i] = number;
        ++i;
    }
}

void quickSort(float arr[], int left, int right) {
    if (left < right) {
        int pivot = left + rand() % (right - left + 1);
        float temp = arr[pivot];
        arr[pivot] = arr[right];
        arr[right] = temp;

        int i = left - 1;
        for (int j = left; j < right; j++) {
            if (arr[j] <= arr[right]) {
                i++;
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }

        i++;
        temp = arr[i];
        arr[i] = arr[right];
        arr[right] = temp;

        quickSort(arr, left, i - 1);
        quickSort(arr, i + 1, right);
    }
}

double measureTime(void (*func)(float[], int, int), float arr[], int left, int right) {
    clock_t start = clock();
    func(arr, left , right);
    clock_t end = clock();
    double elapsed_time = (double)(end - start) / CLOCKS_PER_SEC;
    return elapsed_time;
}

int main() {
    double time_elapsed;
    fillArray(arr);
    time_elapsed = measureTime(quickSort, arr, 0, ARRAY_SIZE - 1);
    cout << fixed << setprecision(6) << "Time elapsed: " << time_elapsed << " seconds" << endl;
    return 0;
}