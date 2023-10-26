#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    
    bool first = (a==b);
    cout << first <<endl;
    
    bool second = (a>b);
    cout << second <<endl;
    
    bool third = (a>=b);
    cout << third <<endl;
    
    bool four = (a<b);
    cout << four <<endl;
    
    bool five = (a<=b);
    cout << five <<endl;
    
    bool six = (a!=b);
    cout << six <<endl;
    
    return 0;
}
