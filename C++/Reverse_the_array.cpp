#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int array[size];
    int reversed_array[size];
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
        reversed_array[size-1-i]=array[i];
    }
    for(int i=0;i<size;i++)
    {
       cout<<reversed_array[i]<<" ";
    }
    return 0;
}