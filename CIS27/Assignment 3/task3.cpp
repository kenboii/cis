#include <iostream>
#include <fstream>

using namespace std;

int main() {
    ifstream myfile ("random_ints.txt");
    if (myfile.is_open()) {
        int number;
        int i = 0;
        while ( myfile >> number )
        {
            number *= 10;
            cout << number << " ";
            if ((i += 1) % 25 == 0 ){ 
                cout << endl;
            }
        }

        myfile.close();
    }
    return 0;
}