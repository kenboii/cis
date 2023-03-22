#include <iostream>

using namespace std;

class My_String {

    public:
    // constructor
    My_String() {
        for (int i = 0; i < buffer; i++) {
            str[i] = '\0';
        }
    }

    void inputBuffer() {
        cout << "Enter input: ";
        cin.getline(str, buffer);
        cout << "You entered: " << str << endl;
    }
    
    //storing char into array
    private:
        const int buffer = 1000;
        char str[1000];
};

    int main () {
        My_String my_string;
        my_string.inputBuffer();
 
}