import java.util.*;
class secondLargestArray
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
        int max=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
        System.out.println("Largest element is : "+max);
        int second=0;
        for(int i=0;i<n;i++)
        {
            if((a[i]>second)&&(a[i]<max))
            {
                second=a[i];
            }
        }
        System.out.println("2nd Largest element is : "+second);
    }
}