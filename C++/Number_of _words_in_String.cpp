#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int size=s.size();
    int number_of_words=0;
    for(int i=0;i<size;i++){
        if((s[i]<91 && s[i]>64) || (s[i]>96 && s[i]<123)){
        number_of_words++;
        }

    }
    cout<<number_of_words;
    return 0;
}