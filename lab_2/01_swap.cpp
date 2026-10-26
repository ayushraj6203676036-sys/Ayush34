#include <iostream>
using namespace std;

// Pass by value
void badSwap(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
}

// Pass by pointer
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int x = 10, y = 20;

    cout << "Before badSwap: "<<endl;
    cout<<"x: "<<x<<endl;
    cout<<"Y: "<<y<<endl;

    badSwap(x, y);

    cout << "After badSwap: " <<endl;
    cout<<"x: "<<x<<endl;
    cout<<"Y: "<<y<<endl;

    swap(&x, &y);

    cout << "After pointer swap: " <<endl;
    cout<<"x: "<<x<<endl;
    cout<<"Y: "<<y<<endl;

    return 0;
}