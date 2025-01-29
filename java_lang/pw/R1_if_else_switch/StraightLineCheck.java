package pw.R1_if_else_switch;

import java.util.Scanner;

public class StraightLineCheck {
    public static void main(String[] args) {
        double x1, y1, x2, y2, x3, y3;
        Scanner sc = new Scanner(System.in);
        System.out.println("Enter the x cooridnates of the first point");
        x1 = sc.nextDouble();
        System.out.println("Enter the y cooridnates of the first point");
        y1 = sc.nextDouble();
        System.out.println("Enter the x cooridnates of the second point");
        x2 = sc.nextDouble();
        System.out.println("Enter the y cooridnates of the second point");
        y2 = sc.nextDouble();
        System.out.println("Enter the x cooridnates of the third point");
        x3 = sc.nextDouble();
        System.out.println("Enter the y cooridnates of the third point");
        y3 = sc.nextDouble();

        if (x1 - x3 == 0 || x2 - x3 == 0) {
            if (x1 - x3 == 0 && x2 - x3 == 0) {
                System.out.println("These three points fall on a straight line");
            } else { // vertical line case
                System.out.println("these three points don't fall on a straight line");
            }
        } else {
            final double Epsilon = 1e-6;
            double m1, m2;
            m1 = (y2 - y1) / (x2 - x1);
            m2 = (y3 - y1) / (x3 - x1);
            boolean flag = (Math.abs(m1 - m2) < Epsilon);
            if (flag) {
                System.out.println("These three points fall on a straight line");
            } else {
                System.out.println("These three points don't fall on a straight line");
            }
        }
        sc.close();

    }
}
