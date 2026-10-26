//Read n integers. Print the largest value and the index where it occurs.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of Array: ";
    cin>>n;

    int arr[n];

    cout<<"Enter Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int max = arr[0];

    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max = arr[i];
        }
    }
    cout<<"The largest number is "<<max<<endl;

    for(int i=0;i<n;i++){
        if(max==arr[i]){
            cout<<"The index is "<<i;
            break;
        }
    }
    return 0;

}