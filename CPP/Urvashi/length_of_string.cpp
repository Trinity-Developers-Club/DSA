#include <bits/stdc++.h>
using namespace std;
int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}
int main()
{
    char name[20];
    cin>>name;

    cout<<getlength(name)<<endl;

    return 0;
}
