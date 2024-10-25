#include<iostream>
#include<climits>
using namespace std;
// Find minimum value in the array
int main(){
    
    int arr[]={10,20,-5,62,-20,100};
    int smallest=INT_MAX;
    for (int i = 0; i <= 5; i++){
                                                                            // if (arr[i] < smallest){
                                                                            //     smallest=arr[i];             <<<- `ANOTHER LOGIC`
                                                                            // }
        smallest=min(arr[i],smallest);
        
    }
    cout<<"Smallest is : "<<smallest<<endl;

}




