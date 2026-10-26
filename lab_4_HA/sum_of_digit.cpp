// write a recursive function that returns the sum of the digits of a number.

#include<iostream>
using namespace std;
int sum_digit(int n){
    if(n == 0){
        return 0;
    }
    else{
        return (n%10)+sum_digit(n/10);
    }
}
int main(){
    int num;
    cout<<"Enter the number: ";
    cin>>num;
    int result = sum_digit(num);
    cout<<"The sum of digit is "<<result;
    return 0;
}