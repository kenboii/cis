#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<char> stk;
    char c;

    cout << "Please input string: ";
    string inputStr;
    getline(cin, inputStr);

    for (int i = 0; i < inputStr.size(); i++) {
        stk.push(inputStr[i]);
    }

    while (!stk.empty()) {
        cout << stk.top();
        stk.pop();
    }
    
    cout << endl;

    return 0;
}
