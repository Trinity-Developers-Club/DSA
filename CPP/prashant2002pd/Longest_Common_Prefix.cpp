/*
Write a function to find the longest common prefix string amongst an array of strings.

If there is no common prefix, return an empty string "".

 

Example 1:

Input: strs = ["flower","flow","flight"]
Output: "fl"
Example 2:

Input: strs = ["dog","racecar","car"]
Output: ""
Explanation: There is no common prefix among the input strings.
*/

/*
  Approach

longestCommonPrefix function in C++. This function takes a vector of strings (strs) as input and tries to find the longest common prefix among all the strings in the vector. Here's a breakdown of the code:

- Initialize two string variables, ans and minstr.

- Loop through each string in the vector strs. For each string, if its length is less than or equal to the length of the first string in the vector (strs[0]), set minstr to that string. This is intended to find the shortest string in the vector, which can be used to determine the maximum possible common prefix length.

- Next, there's a nested loop. It iterates through the characters of the minstr string.

- Inside the nested loop, there's another loop that iterates through all the strings in the vector strs. It checks if the character at the same position i in the current string of strs is not equal to the character in the minstr string at position i. If it finds a mismatch, it returns ans. This implies that the common prefix has ended.

- If no mismatch is found in all strings for the current character i, it appends that character to the ans string.

- Finally, after both loops, it returns the ans string, which should contain the longest common prefix among all the strings in the vector.
*/

#include<iostream>
#include<vector>

using namespace std;


string longestCommonPrefix(vector<string>& strs) {
     if (strs.empty()) {
        return ""; // Return an empty string if the vector is empty.
    }
       
        string ans="",minstr;
        for(int i=0;i<strs.size();i++){
           if(strs[i].size()<=strs[0].size()){
           minstr=strs[i];
           }
            
        }

        for(int i=0;i<minstr.size();i++){
            for(int j=0;j<strs.size();j++)
            if(minstr[i]!=strs[j][i]){
               return ans;
            }
            
            ans+=minstr[i];
        }
         return ans;
    }

int main(){
    int n;
    vector<string> s;
    cout<<"Enter a the no. of string: ";
    cin>>n;
    cout<<"Enter Strings: ";
    for(int i=0;i<n;i++){
        string str;
        
        cin>>str;
        s.push_back(str);
    }
    cout<<longestCommonPrefix(s);
    return 0;
}