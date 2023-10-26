#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b;
    cout<<"Enter the value of a : ";
    cin>>a;
    
    cout<<"Enter the value of b : ";
    cin>>b;
    
    char op;
    cout<<"Enter the operation you want to perform : ";
    cin>>op;
    
    switch(op){
        case '+': cout<<"Addition : "<<a+b<<endl;
        break;

        case '-': cout<<"subtraction : "<<a-b<<endl;
        break;
        
         case '*': cout<<"Multiplication : "<<a*b<<endl;
        break;

        case '/': cout<<"Division : "<<a/b<<endl;
        break;
        
        case '%': cout<<"Modulus : "<<a%b<<endl;
        break;

        default: cout<<"This is default case"<<endl;
    }

    return 0;
}
