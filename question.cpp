#include<iostream>
using namespace std;

//Prime number list by the maximum and minimum range using user input


void prime(int min,int max){
    for (int i = min; i <= max; i++){
        for (int j = 2; j < max; j++){
            if(i%j==0){
                break;
            }else{
                cout<<i<<endl;
                break;
            }
            break;
        } 
        
    }
    return;
    
}

int main(){
    int max,min;
    cout<<"Enter minimum limit : ";
    cin>>min;
    cout<<"Enter maximum limit : ";
    cin>>max;
    prime(min,max);

   
    
    return 0;
}
