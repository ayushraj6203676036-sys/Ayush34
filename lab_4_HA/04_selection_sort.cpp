#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Array: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        int max_index = i;
        for(int j=i+1;j<n;j++){
            if(arr[max_index]<arr[j]){
                max_index = j;
            }
        }
        int temp = arr[i];
            arr[i] = arr[max_index];
            arr[max_index] = temp;
    }

    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}