#include<iostream>
using namespace std;
// A small calculator for getting integer value only
int main(){
    int a,b;
    char ch;
    cin>>a>>ch>>b;

    switch (ch)
    {
    case '+':
        cout<<a+b;
        break;
    case '-':
        cout<<a-b;
        break;
    case '/':
        cout<<a/b;
        break;
    case '*':
        cout<<a*b;
        break;
    
    default:
        cout<<"Invaid Syntax";
        break;
    }



    return 0;
}