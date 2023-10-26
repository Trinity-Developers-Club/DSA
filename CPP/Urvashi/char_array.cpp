#include <bits/stdc++.h>
using namespace std;
void printarray(int n,char ch[]){
     for(int i=0;i<n;i++){
        cout<<ch[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;

    char ch[n];
    for(int i=0;i<n;i++){
        cin>>ch[i];
    }
   
   printarray(n,ch);
   
    return 0;
}
