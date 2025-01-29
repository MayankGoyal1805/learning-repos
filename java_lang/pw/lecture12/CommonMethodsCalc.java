package pw.lecture12;

import java.util.Scanner;

public class CommonMethodsCalc {
    static float a;
    static float b;

    public static void get_input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        a = sc.nextFloat();
        System.out.print("Enter the second number: ");
        b = sc.nextFloat();
        sc.close();
    }

    public static void choice() {
        System.out.println("Enter the operation you want to perform: ");
        System.out.println("1. Addition");
    }
    public static void get_sum() {
        System.out.println("The sum of " + a + " and " + b + " is " + (a + b));

    }
}
