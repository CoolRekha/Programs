import java.io.BufferedReader;
import java.io.IOException;
import java.io.InputStreamReader;
class Solution {
    public int lengthOfLastWord(String s) {
        int len= s.length() - 1;
        char c= s.charAt(len);
        while(c==' ' && len >0){
            len= len-1;
            c=s.charAt(len);
        }
        int k =len;
        while(c!=' ' && len >0){
            len= len-1;
            c= s.charAt(len);
        }
        if(len==0 && s.charAt(0)!=' ')
            return k-len+1;
        else
            return k-len;
    }
}
public class lengthoflastword {
    public static void main(String[] args) throws IOException {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        String str= br.readLine();
        Solution s = new Solution();
        int ss = s.lengthOfLastWord(str);
        System.out.println(ss);
    }
    
}

