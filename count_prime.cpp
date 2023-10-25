#include<bits/stdc++.h>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }

    for(int i=2;i<n;i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    int count=0;

for(int i=2;i<n;i++){
    if(isprime(i)){
        count++;
    }
}
cout<<count<<endl;

    return 0;
}