#include<iostream>
using namespace std;
//Linear Search 

int Search(int arr[],int size,int target){
    for (int i = 0; i < size; i++){
        if (arr[i]==target){
            return i;  // return index of the element
        }   
    }
    return -1; //When invalid 
    
}
int main(){
    int arr[]={4,2,7,8,1,2,1};
    int size=7;
    int target=80;
    cout<<Search(arr,size,target);
   return 0;
}
