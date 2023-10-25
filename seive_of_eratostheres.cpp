#include<bits/stdtr1c++.h>
using namespace std;
int count_prime(int n){
    int count=0;
    vector<int>prime(n+1,true);
    prime[0]=prime[1]=false;

    for(int i=2;i<n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<n;j=j+i){
                prime[j]=false;
            }
        }
    }
    return count;
}
int main(){
    int n;
    cin>>n;

    cout<<count_prime(n);

    return 0;
}