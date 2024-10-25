#include<iostream>
#include<climits>
using namespace std;
// Find maximum value in the array
int main(){
    
    int arr[]={10,20,-5,62,-20,100};
    int greatest=INT_MIN;
    for (int i = 0; i <= 5; i++){
        if (arr[i] > greatest){
            greatest=arr[i];
        }
        // greatest=max(arr[i],greatest);
        
    }
    cout<<"Greatest is : "<<greatest<<endl;

}
