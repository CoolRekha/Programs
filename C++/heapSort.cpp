#include<iostream>

using namespace std;

void display(float arr[],int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<endl;
}


void heapify(float arr[],int size, int pos)
{
    int largest=pos;
    int left=2*pos+1;
    int right=2*pos+2;

    if(left< size && arr[left]>arr[largest])
    {
            largest=left;
    }
    if(right<size && arr[right]>arr[largest])
    {
            largest=right;
    }

    if(largest!=pos)
    {
        int temp = arr[pos];
        arr[pos]=arr[largest];
        arr[largest]=temp;

        display(arr,size);
        heapify(arr,size,largest);
    }
}

void heapsort(float arr[], int size)
{
    for(int i=size/2-1;i>=0;i--)
    {
        heapify(arr,size,i);
    }
    for(int i=size-1;i>=1;i--)
    {
        int temp=arr[0];
        arr[0]=arr[i];
        arr[i]=arr[0];

        heapify(arr,i,0);
    }
}


int main()
{
    int size;
    cout<<"\nEnter size: ";
   // cin>>size;

    /*float arr[size];
    cout<<"\nEnter elements: ";
    for(int i=0;i<size;i++)
        cin>>arr[i];
*/
    float arr[]={27,41,31,9,8};
    size= sizeof(arr)/sizeof(arr[0]);
    cout<<"\nEntered Array: ";
    display(arr,size);

    heapsort(arr,size);

    cout<<"\nSorted Array: ";
    display(arr,size);

    return 0;

}