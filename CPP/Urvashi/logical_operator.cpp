#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    
    bool first = (a==5 && b==10);
    cout << first <<endl;
    
    bool second = (a==2 || b==10);
    cout << second <<endl;
    
    int third = !a; 
    cout << third <<endl;
    
    return 0;
}
