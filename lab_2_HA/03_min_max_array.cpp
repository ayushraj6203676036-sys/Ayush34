#include<iostream>
using namespace std;
void MinMax(int arr[], int n,int *max,int *min){
    *max = arr[0];
    *min = arr[0];
    for(int i=0;i<n;i++){
        if(arr[i]> *max){
            *max = arr[i];
        }
        if(arr[i]< *min){
            *min = arr[i];
        }
    }
}
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Array: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int max, min;
    MinMax(arr, n,&max,&min);
    cout<<"Maximum number in array is "<<max<<endl;
    cout<<"Minimum number in array is "<<min<<endl;
    return 0;
}