package pw.lecture10;

import java.util.Scanner;

public class DecimalToBinary {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the decimal number: ");
        int decimal = sc.nextInt();
        int n = decimal;
        int y=0, pw=1;
        while( n>0) {
            y += (n%2)*pw;
            n /= 2;
            pw *= 10;
        }
        System.out.println(decimal+" in binary is "+y);
        sc.close();
    }
}
