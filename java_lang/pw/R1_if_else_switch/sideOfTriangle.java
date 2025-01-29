package pw.R1_if_else_switch;

import java.util.Scanner;

public class sideOfTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double a, b, c;
        System.out.println("Enter the first side: ");
        a = sc.nextDouble();
        System.out.println("Enter the second side: ");
        b = sc.nextDouble();
        System.out.println("Enter the third side: ");
        c = sc.nextDouble();

        if ((a + b > c)  && (b + c > a) && (c + a > b) ) {
            System.out.println("These three are the sides of a triangle");
        }
        sc.close();
    }
}
