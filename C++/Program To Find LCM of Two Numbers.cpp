Program To Find LCM of Two Numbers

// code

#include <iostream>
using namespace std;


long long gcd(long long int a,
			long long int b)
{
if (b == 0)
	return a;
return gcd(b, a % b);
}


long long lcm(int a, int b)
{
	return (a / gcd(a, b)) * b;
}

// Driver code
int main()
{
	int a = 15, b = 20;
	cout << "LCM of " << a <<
			" and " << b <<
			" is " << lcm(a, b);
	return 0;
}
