#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    int decimal_number;
    cin>>decimal_number;
    int binary[32]={0};
    int i=0;
    while(decimal_number>0)
    {
         binary[31-i]=decimal_number%2;
         decimal_number/=2;
         i++;
    }
    for(int i=0;i<32;i++)
    {
        cout<<binary[i];
    }
    return 0;
}
