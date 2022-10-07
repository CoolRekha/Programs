import java.util.*;

public class LCM_2_numbers {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n1 = sc.nextInt();
        int n2 = sc.nextInt();

        int lcm = 0;

        if (n1 < n2) {
            for (int i = n2; i >= 0; i++) {
                if (i % n1 == 0 & i % n2 == 0) {
                    lcm = lcm + i;
                    break;
                }

            }
            System.out.println("LCM of the numbers is: " + lcm);
        } else if (n1 > n2) {
            for (int i = n1; i >= 0; i++) {
                if (i % n1 == 0 & i % n2 == 0) {
                    lcm = lcm + i;
                    break;
                }

            }
            System.out.println("LCM of the numbers is: " + lcm);
        } else {
            System.out.println("LCM of the numbers is: " + n1);
        }
    }
}