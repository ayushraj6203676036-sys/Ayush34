//Read n integers and print the second largest value (assume at least two distinct values).
#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "Enter the size of Array: ";
    cin >> n;

    int arr[n];

    cout << "Array: "<<endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int max = arr[0];
    int second_max = arr[0];
    for (int i = 1; i < n; i++)
    {
        if(arr[i]> max){
            max = arr[i];
        }
        
    }
    for(int i=1;i<n;i++){
        if(arr[i]<max && arr[i]>second_max){
            second_max = arr[i];
        }
    }
    cout << "Second Maximum value = " << second_max << endl;
    return 0;
}