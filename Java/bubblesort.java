package com.kraken;
import java.util.*;
public class bubblesort {
    public static void sort(int arr[])
    {
        
        for(int i = 0; i<arr.length -1; i++)
        {
            for(int j=0; j<arr.length -i -1; j++)
            {
                if(arr[j] < arr[j+1])
                {
                    int temp = arr[j];
                    arr[j] = arr[j+1];
                    arr[j+1] = temp;
                }
            }
        }
        int len = arr.length;
        for(int i = len -1; i>=0; i--)
        {
            System.out.print(arr[i]+" ");
        }
    }
    public static void main(String args [])
    {
        Scanner sc = new Scanner(System.in);
        int arr [] = new int [5];
        for(int i = 0; i<arr.length; i++)
        {
            arr[i] = sc.nextInt();
        }
        sort(arr);
    }
}
