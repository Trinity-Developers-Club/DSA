#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    int a=1,b=1;
    int c;

    cout<<a<<" "<<b<<" ";

    for(int i=2;i<=n;i++){
        c=a+b;
        cout<<c<<" ";
        a=b;
        b=c;
    }



    return 0;
}
