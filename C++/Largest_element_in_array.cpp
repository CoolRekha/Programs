#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    int size;
    cin>>size;
    int array[size];
    int MAX_ELEMENT=-1e5;
    for(int i=0;i<size;i++)
    {
        cin>>array[i];
        if(array[i]>MAX_ELEMENT)
        {
            MAX_ELEMENT=array[i];
        }
    }
    cout<<MAX_ELEMENT;
    return 0;
}