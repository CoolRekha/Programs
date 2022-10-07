/*
** Counting sort is a sorting algorithm that sorts the elements of an array by counting
** the number of occurrences of each unique element in the array/list/data structure.
** Time Complexity: O(n+k) where n is the number of elements in input array and k is the range of input.
** Auxiliary Space: O(n+k)
*/

#include <iostream>
using namespace std;

void display(int *array, int n)
{
    for (int i = 1; i <= n; i++)
        cout << array[i] << " ";
    cout << endl;
}

int getMax(int array[], int n)
{
    int max = array[1];
    for (int i = 2; i <= n; i++)
    {
        if (array[i] > max)
            max = array[i];
    }
    return max; // the max element from the array
}

// counting sort sorting algorithm
void CountingSort(int *array, int n)
{
    int max = getMax(array, n);
    int count[max + 1]; // create count array (max+1 number of elements)

    // initialize all elements to 0 in count array
    for (int i = 0; i <= max; i++)
        count[i] = 0;

    for (int i = 1; i <= n; i++)
        count[array[i]]++; // increase number count in count array.

    // cummulative count of count array to get the
    // positions of elements to be stored in the output array
    for (int i = 1; i <= max; i++)
        count[i] += count[i - 1]; // find cumulative frequency

    int output[n + 1];
    for (int i = n; i >= 1; i--)
    {
        output[count[array[i]]] = array[i];
        count[array[i]] -= 1; // decrease count for same numbers
    }

    // copy output array elements to input array
    for (int i = 1; i <= n; i++)
    {
        array[i] = output[i]; // store output array to main array
    }
}


int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n + 1]; // create an array with given number of elements
    cout << "Enter elements:" << endl;
    for (int i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    cout << "Array before Sorting: ";
    display(arr, n);
    CountingSort(arr, n);
    cout << "Array after Sorting: ";
    display(arr, n);

    return 0;
}