//Read an m × n matrix and a key. Print the (row, col) where it is found, or "Not found".

#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the size of row: ";
    cin>>n;
    cout<<"Enter the size of column:";
    cin>>m;
    int arr[n][m];

    cout<<"Enter the Array: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }

    int key;
    cout<<"Enter the value of key: ";
    cin>>key;

    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr[i][j]==key){
                cout<<"The position of key is ("<<i<<","<<j<<")";
                break;
            }
        }
    }

    cout<<endl;
    return 0;

}