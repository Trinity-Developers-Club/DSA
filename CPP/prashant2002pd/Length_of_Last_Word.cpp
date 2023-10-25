




/*
 Approach

The provided code is an implementation of the lengthOfLastWord function in C++. 
This function takes a string s as input and is designed to find the length of the last word in the string. 
Here's a breakdown of the code:

- Initialize an integer variable count to 0. 
This variable will be used to keep track of the length of the last word.

- Start a loop that iterates through the characters of the string s in reverse order, 
starting from the last character (i.e., s.size() - 1) and moving towards the beginning of the string.

- Within the loop, there is a series of conditional statements to determine the length of the last word.

- If the current character s[i] is a space (' ') and count is 0 (meaning it's the first space encountered),
 do nothing. This condition is used to skip consecutive spaces at the end of the string.

- If the current character s[i] is not a space, increment the count variable. 
This condition is used to count the characters of the last word.

- If the current character s[i] is a space, 
and count is greater than 0 (meaning the last word has been counted), 
return the value of count. This is done to exit the loop and return the length of the last word.

- If the loop completes without finding a space, 
it means there are no leading spaces in the string, and it contains only one word. In this case, 
the loop will also return the length of the last word.

- Finally, if the string is empty or consists of spaces only, 
the function will return 0, as there are no words to measure.
*/

#include<iostream>
#include<vector>

using namespace std;

 int lengthOfLastWord(string s) {
        int count=0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]==' ' && count==0){    
            }
            else if(s[i]!=' '){   
                count++;
            }else
            return count;
        }
        return count;
    }

int main(){
    string s;
    cout<<"enter the string: ";
    cin>>s;
    cout<<lengthOfLastWord(s);

    return 0;
}