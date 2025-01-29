package pw.R1_if_else_switch;
import java.util.Scanner;
public class Odd_Even {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter a positive integer, to check whether it is even or odd: ");
        int n = sc.nextInt();

        while(n<0)
        {
            System.out.println("Enter a positive integer");
             n = sc.nextInt();
        }
        if(n%2 == 0)
        {
            System.out.println("The number is Even");
        }
        else{
            System.out.println("The number is odd");
        }
        sc.close();
    }

}
