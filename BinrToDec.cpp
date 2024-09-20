#include<iostream>
using namespace std;
//Decimal to Binary conversion
int BinrToDec(int num){
    int bin=0;
    int pow=1;  //10^0
    while (num>0){
        int rem=n%2;
        num=num/2;
        bin+=rem*pow;
        pow*=10;
    }
    return bin;
    
}
int main(){
    int num;
    cin>>num;
    cout<<BinrToDec(num)<<endl;

    return 0;
}

//1111  => 15

