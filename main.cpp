#include <iostream>
#include <fstream>
#include <string>
#include <cstdio>

using namespace std;

void printMenu() {
    cout << "\n========================================\n";
    cout << "          SIMPLE TEXT EDITOR            \n";
    cout << "========================================\n";
    cout << "1. Write to a new file\n";
    cout << "2. Append to an existing file\n";
    cout << "3. Read a file\n";
    cout << "4. Delete a file\n";
    cout << "5. Exit\n";
    cout << "========================================\n";
    cout << "Enter your choice: ";
}

void writeFile(bool append) {
    string filename, content;
    cout << "Enter filename: ";
    cin >> filename;
    cin.ignore(); // clear buffer

    ofstream file;
    if (append) {
        file.open(filename, ios::app);
    } else {
        file.open(filename);
    }

    if (!file) {
        cout << "Error opening file!\n";
        return;
    }

    cout << "Enter text (Type ':q' on a new line to save and quit):\n";
    cout << "----------------------------------------\n";
    while (true) {
        getline(cin, content);
        if (content == ":q") {
            break;
        }
        file << content << "\n";
    }
    file.close();
    cout << "----------------------------------------\n";
    cout << "File saved successfully!\n";
}

void readFile() {
    string filename, line;
    cout << "Enter filename to read: ";
    cin >> filename;
    
    ifstream file(filename);
    if (!file) {
        cout << "Error: File does not exist or cannot be opened.\n";
        return;
    }

    cout << "\n--- Contents of " << filename << " ---\n";
    while (getline(file, line)) {
        cout << line << "\n";
    }
    cout << "----------------------------------------\n";
    file.close();
}

void deleteFile() {
    string filename;
    cout << "Enter filename to delete: ";
    cin >> filename;

    if (remove(filename.c_str()) == 0) {
        cout << "File '" << filename << "' deleted successfully.\n";
    } else {
        cout << "Error: Could not delete file (it may not exist).\n";
    }
}

int main() {
    int choice;
    while (true) {
        printMenu();
        if (!(cin >> choice)) {
            cout << "Invalid input. Please enter a number.\n";
            cin.clear();
            cin.ignore(10000, '\n');
            continue;
        }

        switch (choice) {
            case 1: writeFile(false); break;
            case 2: writeFile(true); break;
            case 3: readFile(); break;
            case 4: deleteFile(); break;
            case 5: 
                cout << "Exiting Text Editor. Goodbye!\n"; 
                return 0;
            default:
                cout << "Invalid choice! Try again.\n";
        }
    }
    return 0;
}
