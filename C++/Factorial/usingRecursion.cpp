#include <iostream>
using namespace std;

// TIme complexity of factorial using recursion is O(2^n) and space complexity is O(n). 
// This is because for every call of the function, we are creating a new stack frame and storing the value of n in it.
// This is not an efficient way of calculating factorial.

int factorial(int n)
{
    if (n == 0) // base case
        return 1;
    else
        return n * factorial(n - 1); // recursively calling the function for n-1 and multiplying it with n
}

int main()
{
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    cout << factorial(n) << endl;
    return 0;
}