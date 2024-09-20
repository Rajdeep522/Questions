#include<iostream>
using namespace std;
//Decimal to Binary conversion
int BinrToDec(int n){
    int bin=0;
    int pow=1;//10^0
    while (n>0){
        int rem=n%2;
        n=n/2;
        bin+=rem*pow;
        pow*=10;
    }
    return bin;
    
}
int main(){
    int n;
    cin>>n;
    cout<<BinrToDec(n)<<endl;

    return 0;
}
