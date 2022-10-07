#include<iostream>
using namespace std;

bool isIncreasing(string n)
{
    for(int i=0; i<n.length()-1;i++)
    {
        if(n[i]>n[i+1])
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

    if(isIncreasing(n))
    {
        cout<<n<<" is increasing number.\n";
    }
    else
    {
        cout<<n<<" is not increasing number.\n";
    }

    return 0;
}