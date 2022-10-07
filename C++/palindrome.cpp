#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the number:\n";
    cin>>n;
    
    int orig=n;
    int rev=0;
    while(orig>0){
        
        /*(orig%10)will give me the last digit of the orig number this number is added with 
        rev*10
        intitally rev=0 and as loop runs it gets updated by 
        1 intitally then 12 and then 121 for eg*/
        rev=rev*10+(orig%10);
        
        orig=orig/10;
        /*after retrieval of last digit in every iteration the last digit is removed from orig by dividing it by 10*/

    }
    /* A number is a palindrome if rev and orig number is same */
    if(n==rev){
        cout<<"Number:"<<n<<"Is a palindrome"<<endl;
    }
    
    else{
        cout<<"Number:"<<n<<"Is not a palindrome"<<endl;
    }
    return 0;
}