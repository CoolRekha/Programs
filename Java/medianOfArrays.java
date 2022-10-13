import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;

class Solution {
    public double findMedianSortedArrays(int[] nums1, int[] nums2) {
        double median, l , k;
        int len1= nums1.length;
        int len2= nums2.length;
        int len= len1+len2;
        int array[]= new int[len];
        int a=0, b=0;
        for(int i=0; i<len; i++){
            if(a < len1 && b < len2){
                if(nums1[a]<= nums2[b]){
                    array[i]= nums1[a];
                    a++;
                }
                else{
                    array[i]= nums2[b];
                    b++;
                }
            }
            else if(a==len1){
                array[i]= nums2[b];
                b++;
            }
            else if(b==len2){
                array[i]= nums1[a];
                a++;
            }
        }
        if(len%2==0){
            k=array[len/2];
            l=array[(len/2)-1];
            median=(l+k)/2;
        }
        else{
            a=len/2;
            median=array[a];
        }
        return median;
    }
}
public class medianofarrays {
    public static void main(String[] args) throws IOException {
        BufferedReader br= new BufferedReader(new InputStreamReader(System.in));
        System.out.println("Print a1");
        int size1= Integer.parseInt(br.readLine());
        int arr1[]= new int[size1];
        for(int i=0; i<size1; i++){
            arr1[i]= Integer.parseInt(br.readLine());
        }
        System.out.println("Print a2");
        int size2= Integer.parseInt(br.readLine());
        int arr2[]= new int[size2];
        for(int i=0; i<size2; i++){
            arr2[i]= Integer.parseInt(br.readLine());
        }
        Solution s= new Solution();
        double a= s.findMedianSortedArrays(arr1, arr2);
        System.out.println(a);
    }
}
