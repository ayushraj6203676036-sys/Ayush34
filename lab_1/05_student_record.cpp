//Define struct Student { name, roll, marks }. Read one student's details and print them neatly

#include<iostream>
using namespace std;

struct student{
    string name;
    int roll;
    float marks;
};

int main(){
    student s;

    cout<<"Enter the Name of student: ";
    cin>> s.name;

    cout<<"Enter the roll of student: ";
    cin>> s.roll;
    
    cout<<"Enter the marks of student: ";
    cin>> s.marks;

    cout<<"The student Details: "<<endl;
    cout<<"Name is "<< s.name <<endl;
    cout<<"Roll is "<< s.roll <<endl;
    cout<<"Marks is "<< s.marks <<endl;
    return 0;
}