import java.util.*;
class smallestArray
{
    public static void main(String args[]) {
        System.out.println("Enter no. of elements of array:");
        int n;
        Scanner sc=new Scanner(System.in);
        n=sc.nextInt();
        int[] a=new int[n];
        System.out.println("Enter elements of the array:");
        for(int i=0;i<n;i++)
        {
            a[i]=sc.nextInt();
        }
        int min=a[0];
        for(int i=0;i<n;i++)
        {
            if(a[i]<min)
            {
                min=a[i];
            }
        }
        System.out.println("Smallest element is : "+min);
    

    }
} 
