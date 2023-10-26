
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    
    int first = a^b;
    cout << first <<endl;
    
    int second = a&b;
    cout << second <<endl;
    
    int third = a|b;
    cout << third <<endl;
    
    int four = a<<b;
    cout << four <<endl;
   
    int five = a>>b;
    cout << five <<endl;

    cout << ~a <<" "<< ~b <<endl;

    return 0;
}
