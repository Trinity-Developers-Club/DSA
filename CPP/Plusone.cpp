#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// Question: 
// You are given a large integer represented as an integer array digits,
// where each digits[i] is the ith digit of the integer. The digits are ordered from most significant
// to least significant in left-to-right order. The large integer does not contain any leading 0's.
// Increment the large integer by one and return the resulting array of digits.

void PlusOne(vector<int>& v){
    int x=v.size();

    for(int i=x-1;i>=0;i--){
        if(v[i]==9){
            v[i]=0; // here we will check if the last index is 9 then will make it 0 ( bcz xx9++ would give us xx0)
        }

    
        else{
            v[i]++; // if last index is not 9 then we will simply increment it.
            return;
        }
    }
    v.insert(v.begin(),1);
    //i nserts the value 1 at v.begin(), which is the beginning of the vector
    return;
} 

int main()
{
    int n,a;
    cin>>n;

    vector<int>v(n);

    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    PlusOne(v);

     for(int i = 0; i < v.size(); i++){
        cout << v[i] << " ";
    }

    return 0;
}