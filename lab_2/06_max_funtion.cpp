#include <iostream>
using namespace std;

struct Student
{
    string name;
    int roll;
    float marks;
};

// Find and return the student with highest marks
Student findTopper(Student a[], int n)
{
    Student topper = a[0];

    for (int i = 1; i < n; i++)
    {
        if (a[i].marks > topper.marks)
        {
            topper = a[i];
        }
    }

    return topper;
}

int main()
{
    int n;

    cout << "Enter number of students: ";
    cin >> n;

    Student a[n];

    // Read student details
    for (int i = 0; i < n; i++)
    {
        cout << "\nEnter details of student " << i + 1 << ":\n";

        cout << "Name: ";
        cin >> a[i].name;

        cout << "Roll: ";
        cin >> a[i].roll;

        cout << "Marks: ";
        cin >> a[i].marks;
    }

    // Find topper
    Student topper = findTopper(a, n);

    // Print topper
    cout << "\n--- Topper ---\n";
    cout << "Name: " << topper.name << endl;
    cout << "Roll: " << topper.roll << endl;
    cout << "Marks: " << topper.marks << endl;

    return 0;
}