#include<iostream>
using namespace std;
// Reverse a array for user input 
void reverse(int arr[],int n){
    for (int i = 0; i < (n/2); i++){
        int firstval=arr[i];
        int secondval=arr[n-i-1];
        arr[i]=secondval;
        arr[n-i-1]=firstval++
        ;
    }
    cout<<"The reverse array is: ";
    for (int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
    
    
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++){
        cout<<"Enter a element of "<<i+1<<": ";
        cin>>arr[i];
    }
    reverse(arr,n);
    return 0;
    
}   