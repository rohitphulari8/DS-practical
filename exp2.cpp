#include <iostream>
#include <string>
using namespace std;

// Structure for Employee
struct Employee {
    int id;
    string name;
    float salary;
    Employee* next;
};

// Head pointer
Employee* head =NULL;

// Insert Employee
void insertEmployee() {
    Employee* newNode = new Employee;

    cout << "Enter Employee ID: ";
    cin >> newNode->id;

    cout << "Enter Employee Name: ";
    cin >> newNode->name;

    cout << "Enter Employee Salary: ";
    cin >> newNode->salary;

    newNode->next = head;
    head = newNode;

    cout << "Employee inserted successfully.\n";
}

// Delete Employee by ID
void deleteEmployee(int id) {
    Employee* temp = head;
    Employee* prev = NULL;

    if (temp != NULL && temp->id == id) {
        head = temp->next;
        delete temp;
        cout << "Employee deleted successfully.\n";
        return;
    }

    while (temp != NULL && temp->id != id) {
        prev = temp;
        temp = temp->next;
    }

    if (temp == NULL) {
        cout << "Employee not found.\n";
        return;
    }

    prev->next = temp->next;
    delete temp;

    cout << "Employee deleted successfully.\n";
}

// Search Employee
void searchEmployee(int id) {
    Employee* temp = head;

    while (temp != NULL) {
        if (temp->id == id) {
            cout << "\nEmployee Found:\n";
            cout << "ID: " << temp->id << endl;
            cout << "Name: " << temp->name << endl;
            cout << "Salary: " << temp->salary << endl;
            return;
        }
        temp = temp->next;
    }

    cout << "Employee not found.\n";
}

// Display Employees
void displayEmployees() {
    Employee* temp = head;

    if (temp == NULL) {
        cout << "No employee records found.\n";
        return;
    }

    cout << "\nEmployee Records:\n";
    while (temp != NULL) {
        cout << "ID: " << temp->id
             << "\tName: " << temp->name
             << "\tSalary: " << temp->salary << endl;

        temp = temp->next;
    }
}

// Main Function
int main() {
    int choice, id;

    do {
        cout << "\n--- Employee Record Management ---\n";
        cout << "1. Insert Employee\n";
        cout << "2. Delete Employee\n";
        cout << "3. Search Employee\n";
        cout << "4. Display Employees\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                insertEmployee();
                break;

            case 2:
                cout << "Enter Employee ID to delete: ";
                cin >> id;
                deleteEmployee(id);
                break;

            case 3:
                cout << "Enter Employee ID to search: ";
                cin >> id;
                searchEmployee(id);
                break;

            case 4:
                displayEmployees();
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice!\n";
        }

    } while (choice != 5);

    return 0;
}
