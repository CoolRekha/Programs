
#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cout<<"Enter the string:\n";
    
    getline(cin,s);/*this function is used to get whitespaces in the string and prevents its termination as soon 
    the white space is encountered*/
    int si=0;
    int ei=s.length()-1;
    /*this loop deals with two pointers one at start and one at end and after every iteration
    si is incremented and ei is decremented*/
    while(si<=ei){
        /*swapping of characters*/
        char temp=s[si];
        s[si]=s[ei];
        s[ei]=temp;
        si++;
        ei--;
    }
    cout<<"String after reversal:\n";
    cout<<s;

    return 0;
}