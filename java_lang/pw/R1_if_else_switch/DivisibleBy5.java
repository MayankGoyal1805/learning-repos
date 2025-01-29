package pw.R1_if_else_switch;

import java.util.Scanner;

public class DivisibleBy5 {
    public static void main(String[] args) {
        int n = -1;
        Scanner sc = new Scanner(System.in);
        while (n < 0) {
            try {

                System.out.println("Enter an integer to check it's divisbility by 5: ");
                n = sc.nextInt();

                if (n % 5 == 0) {
                    System.out.println("This number is divisible by 5");

                } else {
                    System.out.println("This number is not divisible by 5");
                }
            } catch (Exception e) {
                System.out.println("Please enter a valid integer");
                sc.next();

            }
        }
        sc.close();
    }

}
