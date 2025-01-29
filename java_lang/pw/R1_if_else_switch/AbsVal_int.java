package pw.R1_if_else_switch;
import java.util.Scanner;
public class AbsVal_int {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the integer: ");
        int i = sc.nextInt();
        int j = i;

        if(i<0) {j = i*(-1);} ;

        System.out.println("Absolute value of "+i+" is "+j);
        sc.close();
    }
}
