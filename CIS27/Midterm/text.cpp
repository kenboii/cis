#include <iostream>
#include <fstream>
#include <string>
#include "drive.h"

using namespace std;

void outputData(string filename) {
    ifstream myfile(filename);
    if (myfile.is_open()) {
        int count = 0;
        string word;
        while (myfile >> word) {
            count++;
            cout << word << " ";
        }

        cout << endl << "Number of words: " << count << endl; 
    }
}