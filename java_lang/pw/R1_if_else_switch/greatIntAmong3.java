package pw.R1_if_else_switch;

import java.util.Scanner;

public class greatIntAmong3 {
public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double no1, no2, no3;
        System.out.print("Enter the first number: ");
        no1 = sc.nextDouble();
        System.out.print("Enter the second number: ");
        no2 = sc.nextDouble();
        System.out.print("Enter the third number: ");
        no3 = sc.nextDouble();

        if ((no1 == no2) && (no2 == no3)) {
            System.out.println("All three numbers are equal");
        } else if ((no1 >= no2) && (no1 >= no3)) {
            System.out.println("First no." + no1 + " is the greatest ");
        } else if ((no2 >= no1) && (no2 >= no3)) {
            System.out.println("Second no. " + no2 + " is the greatest ");
        } else if ((no3 >= no1) && (no3 >= no2)) // this condition is quite redundant
        {
            System.out.println("Third no. " + no3 + " is the greatest ");
        }
        sc.close();
    }
}
