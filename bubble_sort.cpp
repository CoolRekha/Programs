
#include <iostream>
#include <vector>
using namespace std;
void bubble_sort(vector<int>&input){
    int i,j;
    for(i=0;i<input.size()-1;i++){
        for(j=0;j<input.size()-i-1;j++){
            if(input[j]>input[j+1]){
                /*swapping the elements without using an extra variable*/
                input[j]=input[j]+input[j+1];
                input[j+1]=input[j]-input[j+1];
                input[j]=input[j]-input[j+1];
            }
        }
    }
    
}
int main()
{
    vector<int>v;
    int n;
    cout<<"Enter the number of elements to be entered:\n";
    cin>>n;
    
    /*taking inputs of the elements from the user*/
    for(int i=0;i<n;i++){
        int ele;
        cin>>ele;
        v.push_back(ele);/*entering the elements in the vector*/
    }
    bubble_sort(v);/*this will sort the elements of the vector*/
    
    /*printing the elements after sorting*/
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    

    return 0;
}