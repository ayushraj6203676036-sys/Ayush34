//write a recursive function gcd(a,b) using gcd(a,b) = gcd(b,a%b), with gcd(a,0)=a.

#include<iostream>
using namespace std;
int gcd(int a,int b){
    if(b == 0){
        return a;
    }
    else{
        return gcd(b,a%b);
    }
}
int main(){
    int a,b;
    cout<<"Enter the value of a: ";
    cin>>a;
    cout<<"Enter the value of b: ";
    cin>>b;
    cout<<gcd(a,b);
    return 0;
}