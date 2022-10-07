#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i;
    string s;
    cin>>s;
    string b="";
    for(i=s.length()-1;i>=0;i--)
       b=b+s[i];
    cout<<b;
    return 0;
}