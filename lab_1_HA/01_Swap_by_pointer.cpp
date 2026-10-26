#include<iostream>
using namespace std;
void swap(int *m, int *n){
    int temp = *m;
    *m = *n;
    *n = temp;

}
int main(){
    int a = 10;
    int b = 20;
    cout<<"a = "<<a<<endl;
    cout<<"b = "<<b<<endl;
    swap(&a, &b);
    cout<<"After swap: "<<endl;
    cout<<"value of a after swap = "<<a<<endl;
    cout<<"value of b after swap = "<<b<<endl;
    return 0;
}