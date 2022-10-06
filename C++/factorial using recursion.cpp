#include <iostream>
using namespace std;


/*this function is a recursive function which run untill the value of n becomes 0 untill then it goes on decrementing 
and gets multiplied */
int factorial(int n){
    if(n==0){
        return 1;
    }
    return(n*factorial(n-1));
}

int main() {
    int n;
    cout<<"Enter the number whose factorial to be found:\n";
    
    
    cin >> n;
    cout<<"FACTORIAL:"<<factorial(n);
    return 0;
}

