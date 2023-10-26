#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i=1,sum=0;
    while(i<=n){
        sum+=i;
        i++;
    }
    cout<<sum<<endl;
    
    return 0;
}
