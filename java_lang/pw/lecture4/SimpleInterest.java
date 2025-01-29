package pw.lecture4;

import java.util.Scanner;

public class SimpleInterest {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);

        System.out.println("Enter the amount borrowed");
        double amount = sc.nextDouble();
        System.out.println("Enter the annual rate of interest");
        double rate = sc.nextDouble();
        System.out.println("Enter the period of time in years");
        double time = sc.nextDouble();

        double interest = (amount * rate * time) / 100;
        System.out.println("The total interest to be paid is: " + interest);
        System.out.println("The total amount to be paid is: " + (interest + amount));
        sc.close();
    }

}
