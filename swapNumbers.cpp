#include<iostream>
using namespace std;
//Swap two number without using thired variable 
int main(){
    int a,b;
    cout<<"Enter a= ";
    cin>>a;
    cout<<"Enter b= ";
    cin>>b;
    a=a+b;
    b=a-b;
    a=a-b;
    // b=a+b;
    cout<<"a= "<<a<<endl;
    cout<<"b= "<<b<<endl;
    return 0;
}