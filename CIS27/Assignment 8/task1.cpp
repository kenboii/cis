#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 1000;

class STACK
{
    private:
        char str[SIZE];
        int top;

    public:
        STACK() {
            top = -1;
        }

        int isFull() {
            if(top == (SIZE-1))
                return 1;
            else
                return 0;
        }

        int isEmpty(){
            if(top == -1)
                return 1;
            else
                return 0;
        }

        int push(char c) {
            if(isFull()){
                return 0;
            }
            ++top;
            str[top] = c;
            return c;
        }

        char pop() {
            char temp;
            if(isEmpty())
                return 0;
            temp = str[top];
            --top;
            return temp;
        }           
};

int main() {
    STACK stk;

    cout << "Please input string: ";
    char inputStr[SIZE];
    cin.getline(inputStr, SIZE);

    for (int i = 0; i < strlen(inputStr); i++) {
        stk.push(inputStr[i]);
    }

    while (!stk.isEmpty()) {
        cout << stk.pop();
    }
    
    cout << endl;

    return 0;
}
