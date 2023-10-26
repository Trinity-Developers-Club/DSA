#include <bits/stdc++.h>
using namespace std;
string isPalindrome(string S)
{
    int start=0,end=S.length()-1;
	while(start<end){
        if (S[start]!=S[end]){
            return "NO";
        }
        else {
            start++;
            end--;
        }
    }
    return "YES";
}

int main()
{
	string S;
    cin>>S;

	cout << isPalindrome(S);

	return 0;
}
