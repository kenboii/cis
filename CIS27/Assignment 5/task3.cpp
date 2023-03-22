#include <iostream>

using namespace std;

class passVerifcation {

    public:
    // Constructor sets bool automatically to false, 
    // Changes to true onces it meets requirements
    passVerifcation() {
        isValid = false;
    }

    // Verifying the length of password
    void verifyLength(char password[]) {
        int len;
        for (len = 0; password[len] != '\0'; len++);
        if (len < 8) {
            cout << "Error: Password must be at least 8 characters long." << endl;
            isValid = false;
        } else {
            isValid= true;
        }
    }

    // Verifying if theres special character in password
    void verifySpecial(char password[]) {
        bool specialChar = false;
        for (int i = 0; password[i] != '\0'; i++) {
            if ((password[i] >= 33 && password[i] <= 47) || 
                (password[i] >= 58 && password[i] <= 64) || 
                (password[i]>= 91 && password[i] <= 96) || 
                (password[i] >= 123 && password[i] <= 126)) 
            {
                specialChar = true;
                break;
            }
        }
        if (!specialChar) {
            cout << "Error: Password must contain at least one special character." << endl;
            isValid = false;
        } else {
            isValid = true;
        }
    }

    // Verifying at least one uppercase character
    void verifyUppercase(char password[]) {
        bool uppercaseChar = false;
        for (int i = 0; password[i] != '\0'; i++) {
            if (password[i] >= 'A' && password[i] <= 'Z') {
                uppercaseChar = true;
                return;
            }
        }
        if (!uppercaseChar) {
        cout << "Error: Password must contain at least one uppercase letter." << endl;
        isValid = false;
        } else {
            isValid = true;
        }
    }

    // Verifying at least one numeric character
     void verifyNumeric(char password[]) {
        bool numericChar = false;
        for (int i = 0; password[i] != '\0'; i++) {
            if (password[i] >= '0' && password[i] <= '9') {
                numericChar = true;
                return;
            }
        }
        if (!numericChar) {
        cout << "Error: Password must contain at least one number." << endl;
        isValid = false;
        } else {
            isValid = true;
        }
    }

    bool isValidPassword() {
        return isValid;
    }

    private:
        const int buffer = 1000;
        bool isValid;
};


    int main() {
        passVerifcation passVer;
        char pass[1000];
        bool isValid = false;

        do {
            cout << "Enter password: ";
            cin.getline(pass, 1000);

            passVer.verifyLength(pass);
            passVer.verifySpecial(pass);
            passVer.verifyUppercase(pass);
            passVer.verifyNumeric(pass);

            isValid = passVer.isValidPassword();

            if (isValid) {
              cout << "Password accepted." << endl;
            } else {
              cout << "Please try again." << endl;
            }
        } while (!isValid);

        return 0;
    }
