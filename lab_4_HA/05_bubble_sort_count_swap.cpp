#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Array: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int count = 0;
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                count++;
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
    cout<<endl;
    cout<<"swaps = "<<count;
    return 0;
}