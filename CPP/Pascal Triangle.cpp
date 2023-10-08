#include <iostream>
using namespace std;
int binomial(int n, int k)
{
    int c=1;
    if (k>n-k){
        k=n-k;
    }
    for (int i = 0; i < k; i++) {
        c=c*(n - i);
        c=c/(i + 1);
    }
 
    return c;
}
void Pascal_triangle(int n)
{
    for (int l=0;l<n;l++) {
        for (int i=0;i<=l;i++)
            cout <<" "<<binomial(l, i);
        cout<<"\n";
    }
}
int main()
{
    int n;
    cin>>n;
    Pascal_triangle(n);
    return 0;
}
 