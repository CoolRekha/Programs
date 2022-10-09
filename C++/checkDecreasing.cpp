#include<iostream>
using namespace std;

bool isDecreasing(string n)
{
    for(int i=0; i<n.length()-1;i++)
    {
        if(n[i]<n[i+1])
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string n;
    cout<<"Enter a number:\n";
    cin>>n;

    if(isDecreasing(n))
    {
        cout<<n<<" is decreasing number.\n";
    }
    else
    {
        cout<<n<<" is not a decreasing number.\n";
    }

    return 0;
}