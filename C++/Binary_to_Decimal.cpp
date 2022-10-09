#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size=s.size();
    long long  Decimal_Number=0;
    for(int i=0;i<size;i++){
        if(s[i]=='1')
        {
            Decimal_Number+=pow(2,size-1-i);
        }
    }
    cout<<Decimal_Number;
    return 0;
}