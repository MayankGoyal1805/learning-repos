package pw.lecture7;

import java.util.Scanner;

public class ReverseDigit {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a integer: ");
        int n = sc.nextInt();
        int y = Math.abs(n);
        int reversedNumber = 0;
        while (y > 0) {
            reversedNumber = (reversedNumber*10) + (y % 10);
            y /= 10;
        }
        if(n<0) reversedNumber *= -1;
        System.out.println("Reversed number of " + n + " is " + reversedNumber);
        sc.close();
    }
}
