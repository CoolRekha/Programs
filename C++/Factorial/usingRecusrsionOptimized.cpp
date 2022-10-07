#include <iostream>
#include <vector>
using namespace std;

// Optimized factorial using recursion where we are storing the value of n! in a vector
// and then returning it when we need it again.
// Time complexity of this approach is O(n) and space complexity is O(n) as well.

int factorial(int n, vector<int> &dp)
{
    if (n == 0) // base case
        return 1;
    else if (dp[n] != -1)
        return dp[n];
    else
        return n * factorial(n - 1, dp); // recursively calling the function for n-1 and multiplying it with n
}

int main()
{
    int n, fact = 1;
    cout << "Enter a number: ";
    cin >> n;
    vector<int> dp(n + 1, -1);
    cout << factorial(n, dp) << endl;
    return 0;
}