#include<iostream>

using namespace std;

int main() {
    int marks[5];
    int *ptr;

    cout << "Enter marks of 5 students:\n";
    for (int i = 0; i < 5; i++) {
        cin >> marks[i];
    }


    ptr = marks;

    cout << "\nMarks of students are:\n";
    for (int i = 0; i < 5; i++) {
        cout << "Student " << i + 1 << ": " << *(ptr + i) << endl;
    }

    return 0;
}
