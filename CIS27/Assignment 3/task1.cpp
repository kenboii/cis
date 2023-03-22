#include <iostream>
#include <cstdlib>
#include <ctime>
#include <fstream>

using namespace std;

int main() {
    srand(time(0));
    int arr[1000];

    for (int i = 0; i < 1000; i++) {
        arr[i] = rand() % 1000 + 1;
    }

    ofstream testFile("random_ints.txt");

    for (int i = 0; i < 1000; i++) {
        cout << arr[i] << "\t";
        testFile << arr[i] << " ";

        if ((i + 1) % 20 == 0 ) {
            cout << endl;
            testFile << endl;
        }
    }

    testFile.close();

    return 0;
}