package pw.lecture9;

import java.util.Scanner;

public class CandRinputNumRec {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row = sc.nextInt();
        System.out.print("Enter the number of columns: ");
        int column = sc.nextInt();

        for (int i = 0; i < row; i++) {
            for (int j = 0; j < column; j++) {
                System.out.print(j + 1);
            }
            System.out.println();
        }
        sc.close();
    }
}
