#include <iostream>

using namespace std;

class My_String {

    public:
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

    void length() {
        for(int i = 0; i < buffer; i++){
            if(str[i] == '\0') {
                cout << "Length: " << i << endl;
                break;
            }
        }
    }

    void isAlpha() {
        bool allAlpha = true;
        for(int i = 0; i < buffer; i++){
            if(str[i] == '\0') {
                break;
            }
            if(!(str[i] >= 'A' && str[i] <= 'Z') && !(str[i] >= 'a' && str[i] <= 'z')){
                allAlpha = false;
                break;
            }
        }
        if(allAlpha) {
            cout << "It is all alphabetical." << endl;
        } else {
            cout << "There are non-alphabetical characters." << endl;
        }

    }

    void toUpper() {
        for(int i = 0; i < buffer; i++){
            if(str[i] >= 'a' && str[i] <= 'z') {
                str[i] -=32;
            }
        }
        cout << str << endl;
    }


    void toLower() {
        for(int i = 0; i < buffer; i++){
            if(str[i] >= 'A' && str[i] <= 'Z') {
                str[i] +=32;
            }
        }
        cout << str << endl;
    }

    void push_back(char c) {
        int len;
        for (len = 0; str[len] != '\0'; len++);
        if (len < buffer - 1) {
            str[len] = c;
            str[len + 1] = '\0';
            cout << "Character '" << c << "' added to the end." << endl;
            cout << str << endl;
        } else {
            cout << "Error: String buffer full." << endl;
        }
    }

    private:
        const int buffer = 1000;
        char str[1000];
};

    int main () {
        My_String my_string;
        char c;
        int choice;

        do {
            cout << "\nEnter choice" << endl;
            cout << "1. Print out your string" << endl;
            cout << "2. Length of string" << endl;
            cout << "3. Check if all alphabetical" << endl;
            cout << "4. Convert string to uppercase" << endl;
            cout << "5. Convert string to lowercase" << endl;
            cout << "6: Add character to string" << endl;
            cout << "7. Exit" << endl;
            cin >> choice;
            cin.ignore();
        switch(choice) {
        case 1:
            my_string.inputBuffer();
            break;
        case 2:
            my_string.length();
            break;
        case 3:
            my_string.isAlpha();
            break;
        case 4:
            my_string.toUpper();
            break;
        case 5:
            my_string.toLower();
            break;
        case 6:
            cout << "Add a character: ";
            cin >> c;
            my_string.push_back(c);
            break;
        case 7:
            cout << "Goodbye" << endl;
            break;
        default:
            cout << "Invalid choice. Try again." << endl;
            break;
        }
    } while (choice !=7);
    return 0;
}