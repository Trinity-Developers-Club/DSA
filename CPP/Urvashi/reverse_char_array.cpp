#include <bits/stdc++.h>
using namespace std;
void reverse_string(string& str){
   int len = str.length();
     int end = len-1;
    int start = 0;
    while(start<end){
        swap(str[start++],str[end--]);
    }
}
int main()
{
    string str;
    cin>>str;

   reverse_string(str);

   cout<<str;

    return 0;
}

