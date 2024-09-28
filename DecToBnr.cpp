#include<iostream>
using namespace std;
//Binary to Decimal conversion
int BnrToDec(int n){
    int dec=0;
    int pow=1;//2**0
    while (n>0) {
        int rem=n%10;
        n=n/10;
        dec+=rem*pow;
        pow*=2;

    }
    return dec;
    
}
int main(){
    int n;
    cin>>n;
    cout<<BnrToDec(n)<<endl;
    return 0;
}

