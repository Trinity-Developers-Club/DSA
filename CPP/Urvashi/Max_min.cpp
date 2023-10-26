#include <bits/stdc++.h>
using namespace std;
int getmax(int n,int a[]){
    int maxi=INT_MIN;

    for(int i=0;i<n;i++){
       maxi=max(maxi,a[i]);
    }
    return maxi;
}
int getmin(int n,int a[]){
    int mini=INT_MAX;
    
    for(int i=0;i<n;i++){
        mini=min(mini,a[i]);
    }
    return mini;
}
int main()
{
    int n;
    cin>>n;

   int a[100];
   for(int i=0;i<n;i++){
       cin>>a[i];
   }
   
   cout<<"Maximum number : "<<getmax(n,a)<<endl;
   cout<<"Minimum number : "<<getmin(n,a)<<endl;
   
    return 0;
}
