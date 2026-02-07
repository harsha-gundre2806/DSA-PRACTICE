#include <iostream>
#include <stack>

using namespace std;

int main() {
    stack<int> myStack;
    int choice, value;

    while (true) {
        cout << "\n--- Stack Menu ---";
        cout << "\n1) Push\n2) Pop\n3) Top\n4)Display\n5) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "Enter element to push: ";
                cin >> value;
                myStack.push(value);
                cout << value << " pushed to stack.\n";
                break;

            case 2: 
                if (!myStack.empty()) {
                    cout << "Popped element: " << myStack.top() << endl;
                    myStack.pop();
                } else {
                    cout << "Stack Underflow! Nothing to pop.\n";
                }
                break;

            case 3: 
                if (!myStack.empty()) {
                    cout << "Element at the top: " << myStack.top() << endl;
                } else {
                    cout << "Stack is empty.\n";
                }
                break;

            case 4: 
                if (myStack.empty()) {
                    cout << "Stack is empty.\n";
                } else {
                    stack<int> tempStack = myStack; 
                    cout << "Stack elements (top to bottom): ";
                    while (!tempStack.empty()) {
                        cout << tempStack.top() << " ";
                        tempStack.pop();
                    }
                    cout << "\nTotal size: " << myStack.size() << endl;
                }
                break;
            case 5: 
                cout << "Exiting...\n";
                return 0;

            default: 
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
