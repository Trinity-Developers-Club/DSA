#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;

    bool prime=1;

    for(int i=2;i<=sqrt(n);i++){
        if(n%i==0){
            prime=0;
            break;
        }

    }
    if(prime==0){
        cout<<"not prime"<<endl;
    }
    else{
        cout<<"prime"<<endl;
    }


    return 0;
}
