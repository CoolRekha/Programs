/*
Time Complexity: O(n^2)
Space Complexity: O(1)
*/
#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n)
{
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
}

void selectionSort(int arr[], int n)
{
    int i,j,min_in;
    // One by one move boundary of unsorted subarray
    for(i=0;i<n;i++)
    {
        // get index of minimum element in unsorted array
        min_in = i;
        for(j=i+1;j<n;j++)
            if (arr[j] < arr[min_in])
                min_in = j;

        // Swap the found minimum element with the first element
        swap(arr[i],arr[min_in]);
    }
}

int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n]; // create an array with given number of elements
    cout << "Enter elements:" << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout<<"Array before Sorting: ";
    print(arr,n);
    selectionSort(arr,n);
    cout<<"Array after Sorting: ";
    print(arr,n);

    return 0;
}