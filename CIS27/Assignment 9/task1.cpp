#include <iostream>
#include <string>

using namespace std;

const int SIZE = 1000;

class Queue
{
    private:
        char str[SIZE];
        int capacity;
        int front;
        int rear;
        int count;

    public: 
        Queue() {

            capacity = SIZE;
            front = 0;
            rear = -1;
            count = 0;
        }

        char dequeue() {
            if (isEmpty())
            {
                exit(EXIT_FAILURE);
            }

            char x = str[front];

            front = (front + 1) % capacity;
            count--;

            return x;
        }

        void enqueue(char item) {
            
            if (isFull()) {
                exit(EXIT_FAILURE);
            }

            rear = (rear + 1) % capacity;
            str[rear] = item;
            count++;
        }
        
        int peek() {

            if (isEmpty()) {
                exit(EXIT_FAILURE);
            }
            return str[front];
        }

        int size() {
            return count;
        }

        bool isEmpty() {
            return (size() == 0);
        }

        bool isFull() {
            return (size() == capacity);
        }
};

int main() {
    Queue q;
    string inputString;


    cout << "Please input string: ";
    getline(cin , inputString);

    for (int i = 0; i < inputString.length(); i++){
        q.enqueue(inputString[i]);
    }
        
    int len = q.size();

    for (int i = 0; i < len; i++) {
        char c = q.dequeue();
            q.enqueue(c);
            q.enqueue(c);
    }

    while (!q.isEmpty()) {
        cout << q.dequeue();
    }

    cout << endl;

    return 0;
}