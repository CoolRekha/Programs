#include<stdio.h>
int main(){
    int n,max=-999999,i,ele;
    printf("\nEnter How Many numbers You want to Input:  ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("\nEnter the %d Number: ",i);
        scanf("%d",&ele);
        if(ele>max)
        {
            max=ele;
        }
    }
    printf("\nThe Largest Number among %d Numbers is: %d",n,max);
    return 0;
}