#include<bits/stdc++.h>
using namespace std;
int longestMountain(vector<int>& a) {
        int largest=0;
        int cnt=0;
        int n=a.size();
        for(int i=1;i<n-1;){
            if(a[i]>a[i-1]&&a[i]>a[i+1]){
                int j=i-1;
                cnt=1;
                while(j>=0&&a[j]<a[j+1]){
                    cnt++;
                    j--;
                
                }
                i=i+1;
                while(i<n&&a[i]<a[i-1]){
                    cnt++;
                    i++;
                    
                }
                largest=max(largest,cnt);
            }
            else
            i++;
        }
        return largest;
    }
    
  
    int main(){
    	int n;
    	cout<<"Enter the size of array: ";
    	cin>>n;
    	vector<int> v;
    	cout<<"Enter the elements of the array ";
    	int x;
    	for(int i=0;i<n;i++){
    		cin>>x;
    		v.push_back(x);
		}
		int ans=longestMountain(v);
		cout<<"The longest mountain length is "<<ans;
	}