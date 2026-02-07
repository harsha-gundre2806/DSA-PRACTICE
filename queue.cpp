#include <iostream>
#include <queue>

using namespace std;

int main() {
    queue<int> myQueue;
    int choice, value;

    while (true) {
        cout << "\n--- Queue Menu ---";
        cout << "\n1) Enqueue (Push)\n2) Dequeue (Pop)\n3) Front Element\n4) Display All\n5) Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: 
                cout << "Enter element to add: ";
                cin >> value;
                myQueue.push(value);
                cout << value << " added to the queue.\n";
                break;

            case 2: 
                if (!myQueue.empty()) {
                    cout << "Removed element: " << myQueue.front() << endl;
                    myQueue.pop(); 
                } else {
                    cout << "Queue Underflow! Nothing to remove.\n";
                }
                break;

            case 3: 
                if (!myQueue.empty()) {
                    cout << "Element at the front: " << myQueue.front() << endl;
                } else {
                    cout << "Queue is empty.\n";
                }
                break;

            case 4: 
                if (myQueue.empty()) {
                    cout << "Queue is empty.\n";
                } else {
                    queue<int> tempQueue = myQueue;
                    cout << "Queue elements (front to back): ";
                    while (!tempQueue.empty()) {
                        cout << tempQueue.front() << " ";
                        tempQueue.pop();
                    }
                    cout << "\nTotal size: " << myQueue.size() << endl;
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
