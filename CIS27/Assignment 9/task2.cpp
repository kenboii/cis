#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
    queue<char> q;
    string inputString;


    cout << "Please input string: ";
    getline(cin , inputString);

    for (int i = 0; i < inputString.length(); i++){
        q.push(inputString[i]);
    }
        
    int len = q.size();

    for (int i = 0; i < len; i++) {
        char c = q.front();
            q.pop();
            q.push(c);
            q.push(c);
            
    }

    while (!q.empty()) {
        char c = q.front();
        cout << c;
        q.pop();
    }

    cout << endl;

    return 0;
}