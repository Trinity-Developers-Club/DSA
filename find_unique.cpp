#include <iostream>
using namespace std;
int find_Unique(int n, int arr[])
{
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    
   cout<<find_Unique(n,arr);

    return 0;
}
