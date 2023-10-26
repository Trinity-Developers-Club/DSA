#include<bits/stdc++.h>
using namespace std;
int main(){

    //implicit typecasting

    int x=65;
    char ch=x;

    cout<<x<<endl;

    cout<<ch<<endl;

    int x1 =126;
    char ch1 = x1;

    cout<<x1<<endl;

    cout<<ch1<<endl;


   //explicit typecasting

    int i=65;
    int *p=&i;
    char *pc=(char*)p;

    cout<<*p<<endl;

    cout<<pc<<endl;



    return 0;
}
