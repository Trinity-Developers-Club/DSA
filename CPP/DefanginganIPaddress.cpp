
// Given a valid (IPv4) IP address, return a defanged version of that IP address.
// A defanged IP address replaces every period "." with "[.]".

#include<iostream>
#include<bits/stdc++.h>
using namespace std;



string Defaning(string IP){

    string answer;

     for(char c : IP){
        if(c=='.'){
            answer +=  "[.]";
        }
        else{
            answer += c;
        }
    }

    return answer;
}

int main()
{
    string IP;
    cin>>IP;
    string ans = Defaning(IP);

    cout<<ans<<" ";
    return 0;
}