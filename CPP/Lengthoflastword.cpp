#include<iostream>
#include<bits/stdc++.h>
using namespace std;

//Given a string s consisting of words and spaces, return the length of the last word in the string.

int lengthoflastworld(string s){
    int len=0;
    int i=s.length()-1;

    while(i>=0 && s[i]==' '){
        i--; // Altering the space 
    } 

    while(i>=0 && s[i]!=' '){
        len++;
        i--;
    }

    return len;

}

int main()
{
    string s;
    cin>>s;
    int ans = lengthoflastworld(s);
    cout<<ans<<endl;
    return 0;