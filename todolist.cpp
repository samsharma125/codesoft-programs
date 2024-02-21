#include <iostream>
#include <fstream>
#include <string>
using namespace std;

struct Task {
    string description;
    bool completed;
};

const string FILENAME = "tasks.txt";

void addTask(const string& description) {
    ofstream outFile(FILENAME, ios::app);
    if (outFile.is_open()) {
        outFile << description << " 0\n"; // 0 indicates task is not completed
        cout << "Task added successfully!\n";
        outFile.close();
    } else {
        cout << "Error opening file for writing.\n";
    }
}

void viewTasks() {
    ifstream inFile(FILENAME);
    if (inFile.is_open()) {
        string description;
        bool completed;
        while (inFile >> description >> completed) {
            cout << (completed ? "[X] " : "[ ] ") << description << endl;
        }
        inFile.close();
    } else {
        cout << "Error opening file for reading.\n";
    }
}

void markCompleted(int taskNumber) {
    // Implement marking a task as completed
    // You can modify the file or update the in-memory data structure
    // based on the taskNumber.
    cout << "Task marked as completed!\n";
}

int main() {
    int choice;
    string description;

    cout << "Welcome to the To-Do List App!\n";

    do {
        cout << "\nMenu:\n";
        cout << "1. Add a task\n";
        cout << "2. View tasks\n";
        cout << "3. Mark a task as completed\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter task description: ";
                cin.ignore(); // Clear newline from previous input
                getline(cin, description);
                addTask(description);
                break;
            case 2:
                viewTasks();
                break;
            case 3:
                int taskNumber;
                cout << "Enter task number to mark as completed: ";
                cin >> taskNumber;
                markCompleted(taskNumber);
                break;
            case 4:
                cout << "Goodbye!\n";
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    } while (choice != 4);

    return 0;
}