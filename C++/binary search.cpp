#include <iostream>
using namespace std;

/*This algorithim works on the concept that first the element at the mid is checked.If the element is not present 
at the mid position of the array then the element to be searched with the element in array at mid
If the searching element is less than we will move to the left half of the array
If the searching element is greater than the mid element than the search will shift to right half of the array
*/

int binarySearch(int *input, int n, int val)
{
    //Write your code here
    int start = 0;
    int end = n-1;
    
    int middle = (start+end)/2;
    
    while(start <= end)
    {
        if(input[middle] < val)
        {
            start = middle + 1;
        }
        
        else if(input[middle] == val)
        {
            return middle;
            break;
        }
        
        else
        {
            end = middle - 1;  
        }
        
        middle = (start + end)/2;
    }
    
    if(start > end)
    {
        return -1;
    }
}

int main()
{

	int size;
	cin >> size;
	int *input = new int[size];

	for(int i = 0; i < size; ++i)
	{
		cin >> input[i];
	}
	
	int t;
	cin >> t;

	while (t--)
	{
		int val;
		cin >> val;
		cout << binarySearch(input, size, val) << endl;
	}
	
	delete [] input;
	return 0;
}
