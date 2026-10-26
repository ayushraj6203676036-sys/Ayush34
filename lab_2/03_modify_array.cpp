//Write void doubleAll(int a[], int n) that doubles every element. Print the array in main afterwards
//to prove the change stuck


#include<iostream>
void doubleAll(int a[],int n){
    for(int i=0;i<n;i++){
        a[i] = a[i]*2;
    }
}
int main(){
    int n = 5;
    int a[n] = {1,2,3,4,5};
    doubleAll(a,n);
    for(int i=0;i<n;i++){
        std::cout<<a[i]<<" ";
    }
    return 0;
}