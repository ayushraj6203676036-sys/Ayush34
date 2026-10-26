#include<iostream>
using namespace std;

struct student{
    string name;
    int roll;
    float marks;
};

void printstudent(struct student s){
    cout<<"Name: "<<s.name<<endl;
    cout<<"Roll: "<<s.roll<<endl;
    cout<<"Marks: "<<s.marks<<endl;
}

void updateMarks(struct student *s, float m){
    s -> marks = m;
}

int main(){
    struct student s;
    float m;
    cout<<"Enter Name: ";
    cin>>s.name;
    cout<<"Enter Roll: ";
    cin>>s.roll;
    cout<<"Enter Marks: ";
    cin>>s.marks;

    printstudent(s);
    cout<<"Enter the changed Marks: ";
    cin>>m;

    updateMarks(&s, m);
    cout<<"After update: "<<endl;
    printstudent(s);
    return 0;
}