#include <bits/stdc++.h>
using namespace std;
void reverse_array(int n,int a[]){
    int start=0;
    int end=n-1;
  while(start<=end){
        swap(a[start],a[end]);
        start++;
        end--;
    }
}
void print_array(int n,int a[]){
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    
    int a[n];
    
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    
    reverse_array(n,a);
    
    print_array(n,a);
 
    return 0;
}
