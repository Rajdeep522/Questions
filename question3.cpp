#include<iostream>
using namespace std; 
//fibonacci series

void fibo(int num){
    int t1=0;
    int t2=1;
    int nextTerm; 
    for (int i = 0; i <num; i++){
        cout<<t1<<endl;
        nextTerm=t1+t2;
        t1=t2;
        t2=nextTerm;

    }
    
}
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    
    fibo(n);
        
    return 0;
}