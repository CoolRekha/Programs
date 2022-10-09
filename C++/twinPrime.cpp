#include<iostream>
using namespace std;

bool isPrime(int a)
{
    for(int i=2; i<a; i++)
    {
        if(a%i == 0)
        {
            return false;
        }
    }
    return true;
}

bool isTwinPrime(int a, int b)
{
    if(abs(a-b) == 2 && isPrime(a) && isPrime(b))
    {
        return true;
    }
    return false;
}

int main()
{
    int a, b;

    cout<<"Enter two numbers: \n";
    cin>>a>>b;

    if(isTwinPrime(a, b))
    {
        cout<<a<<" and "<<b<<" are twin primes.\n";
    }
    else
    {
        cout<<a<<" and "<<b<<" are not twin primes.\n";
    }

    return 0;
}