#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int i=2,sum=0;
    while(i<=n)
    {
        if(i%2==0){
        sum+=i;
        }
        i++;
    }
    cout<<sum<<endl;
    
    return 0;
}
