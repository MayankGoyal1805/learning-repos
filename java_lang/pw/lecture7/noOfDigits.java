package pw.lecture7;

import java.util.Scanner;

public class noOfDigits {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a integer: ");
        int n = sc.nextInt();
        int y = Math.abs(n);
        int digitNum = (n == 0)?1:0 ;
        while (y > 0) {
            digitNum++;
            y /= 10;
        }
        System.out.println("Number of digits in " + n + " is " + digitNum);
        sc.close();
    }
}
