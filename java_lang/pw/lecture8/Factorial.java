package pw.lecture8;

import java.util.Scanner;

public class Factorial {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        System.out.println("Enter the number: ");
        n = sc.nextInt();
        System.out.println("The value of " + n + "! is " + factorial(n));
        sc.close();

    }

    static int factorial(int n) {
        int x = 1;
        for (int i = 1; i <= n; i++) {
            x *= i;
        }
        return x;
    }
}