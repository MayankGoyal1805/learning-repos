package pw.R1_if_else_switch;

import java.util.Scanner;

public class youngestAmong3 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double Ram, Shyam, Ajay;
        System.out.print("Enter the age of Ram: ");
        Ram = sc.nextDouble();
        System.out.print("Enter the age of Shyam: ");
        Shyam = sc.nextDouble();
        System.out.print("Enter the age of Ajay: ");
        Ajay = sc.nextDouble();

        if (Ram > Shyam) {
            if (Shyam > Ajay) {
                System.out.println("Ajay is youngest");
            } else {// Shyam<Ajay
                System.out.println("Shyam is youngest");
            }
        } else {// Ram<Shyam
            if (Ram > Ajay) {
                System.out.println("Ajay is youngest");
            } else { // Ram<Ajay
                System.out.println("Ram is youngest");
            }
        }
        sc.close();

    }
}
