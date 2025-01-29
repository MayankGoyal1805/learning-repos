package pw.R1_if_else_switch;

import java.util.Scanner;

public class greatest3nestedcondit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double no1, no2, no3;
        System.out.print("Enter the first number: ");
        no1 = sc.nextDouble();
        System.out.print("Enter the second number: ");
        no2 = sc.nextDouble();
        System.out.print("Enter the third number: ");
        no3 = sc.nextDouble();

        if (no1 > no2) {
            if (no1 > no3) { // no1 is the greatest
                System.out.println("no1 is the greatest");
            } else { // no1<=no3 , no3 is the greatest
                System.out.println("no3 is the greatest");
            }
        } else { // no1<no2
            if (no2 > no3) {
                System.out.println("no2 is the greatest");
            } else {// no2<no3
                System.out.println("no3 is the greatest");
            }
        }
        sc.close();
    }
}
