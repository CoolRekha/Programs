
#include <iostream>

using namespace std;


/*Time complexity:
    The best case time complexity:0(1)
    Worst case time complexity:0(n)
    Space complexity:O(1)*/
int linear_search(int arr[],int n,int ele){
    /*A variable position is created such that if the element is not there in the array it returns -1 else returns the index*/
    int pos=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==ele){
            pos=i;
        }
    }
    return pos;
}
int main()
{
    int n;
    cin>>n;
    int*arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ele;
    cout<<"Enter the element to be searched:\n";
    cin>>ele;
    cout<<"Index of element:"<<linear_search(arr,n,ele);
    

    return 0;
}