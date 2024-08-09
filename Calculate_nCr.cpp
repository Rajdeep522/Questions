#include<iostream>
using namespace std;
int comb(int s){
    int mul=1;
    for (int i = 1; i <=s; i++){
        mul=mul*i;
    }
    return mul;
    
}
int main(){
   int n,r,cal;
   cout<<"Enter n= ";
   cin>>n;
   cout<<"Enter r= ";
   cin>>r;
   if (n==r){
    cout<<"The value is : 0";
   }else if(n<r){
    cout<<"Syntax error";
   }else{
    cal=comb(n)/(comb(n-r)*comb(r));
    cout<<"The result is : "<<cal;
   }

   
   
    return 0;
}
