#include <iostream>
using namespace std;

struct Student {
    string name;
    int roll;
    float marks;
};

int main() {
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student s[n];

    // Read student details
    for (int i = 0; i < n; i++) {
        cout << "\nEnter details of student " << i + 1 << ":" << endl;

        cout << "Name: ";
        cin >> s[i].name;

        cout << "Roll: ";
        cin >> s[i].roll;

        cout << "Marks: ";
        cin >> s[i].marks;
    }

    // Find student with highest marks
    int highest = 0;

    for (int i = 1; i < n; i++) {
        if (s[i].marks > s[highest].marks) {
            highest = i;
        }
    }

    // Print result
    cout << "\n--- Student with Highest Marks ---" << endl;
    cout << "Name  : " << s[highest].name << endl;
    cout << "Marks : " << s[highest].marks << endl;

    return 0;
}