#include <bits/stdc++.h>
using namespace std;

int main()
{
    char ch;
    cin>>ch;
    
    if(ch>='a' && ch<='z'){
        cout<<"This is lowercase"<<endl;
    }
    else if(ch>='A' && ch<='Z'){
        cout<<"This is uppercase"<<endl;
    }
    else if(ch >='1'  && ch<='9'){
        cout<<"This is number"<<endl;
    }
    
    return 0;
}

//
