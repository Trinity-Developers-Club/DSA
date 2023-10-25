#include <bits/stdc++.h>
using namespace std;
void rotate_array(int arr[],int n, int k) {
        int temp[n];
         int j = 0;
       for(int i = k; i < n; i++) {
        temp[j] = arr[i];
        j++;
    }
      for(int i = 0; i < k; i++) {
        temp[j] = arr[i];
        j++;
    }
    for(int i = 0; i < n; i++) {
        arr[i] = temp[i];
    }
}
void print(int ans[],int n){
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
}
    cout<<endl;
}
int main()
{
    int k=3;
   int arr[5]={1,5,7,9,2};

   rotate_array(arr,5,3);

   print(arr,5);
 
    return 0;
}
