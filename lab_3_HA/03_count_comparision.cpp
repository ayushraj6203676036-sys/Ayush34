//For the same sorted array and key,count how many comparisons linear search makes and how many binary search makes.
// Print both, side by side.

#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of array: ";
    cin>>n;
    int arr[n];
    cout<<"Enter Sorted Array: ";
    for(int i = 0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cout<<"Enter the key: ";
    cin>>key;
    //Linear:
    int linearcount = 0;
    for(int i=0;i<n;i++){
        linearcount++;
        if(arr[i]==key){
            break;
        }
    }
    cout<<"Total Linear comparision is "<<linearcount<<endl;

    //Binary:
    int low = 0;

    int high = n-1;
    int binarycount = 0;
    while (low<=high)
    {
        int mid = (low+high)/2;
        binarycount++;
        if(arr[mid] == key){
            break;
        }
        else if(arr[mid]<key){
            low = mid + 1;
        }
        else{
            high = mid - 1;
        }
    }
    cout<<"Total Binary comparision is "<<binarycount<<endl;
    return 0;
}