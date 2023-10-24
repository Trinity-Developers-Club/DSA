#include <iostream>
using namespace std;
int find_Duplicate(int n, int arr[]) 
{
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    for(int i=0;i<n;i++){
        ans=ans^i;
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
    
   cout<<find_Duplicate(n,arr);

    return 0;
}





// #include <bits/stdc++.h>
// using namespace std;
// int find_Duplicate(int n, int arr[]) {
//      unordered_map<int,int>m;
//         for(int i=0;i<n;i++){
//             m[arr[i]]++;
//         }
//         for(auto x:m){
//             if(x.second>1){
//                 return x.first;
//             }
//         }
//         return 0;
//     }
// int main()
// {
//     int n;
//     cin>>n;
//     int arr[n];
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
    
//    cout<<find_Duplicate(n,arr);

//     return 0;
// }
