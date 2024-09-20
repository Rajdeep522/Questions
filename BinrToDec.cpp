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

//0000 => 0
//0001 => 1
//0010 => 2
//0011 => 3
//0100 => 4
//0101 => 5
//0110 => 6
//0111 => 7
//1000 => 8
//1001 => 9
//1010 => 10
//1011 => 11
//1100 => 12
//1101 => 13
//1110 => 14
//1111 => 15

