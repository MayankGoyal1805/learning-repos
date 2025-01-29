package pw.lecture7;

import java.util.Scanner;

public class SumOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a integer: ");
        int n = sc.nextInt();
        int y = Math.abs(n);
        int sumOfDigits = (n == 0) ? 1 : 0;
        while (y > 0) {
            sumOfDigits += y%10;
            y /= 10;
        }
        System.out.println("Sum of digits in " + n + " is " + sumOfDigits);
        sc.close();
    }
}
