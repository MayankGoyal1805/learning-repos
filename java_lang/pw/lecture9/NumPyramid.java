package pw.lecture9;

import java.util.Scanner;

public class NumPyramid {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row = sc.nextInt();

        for (int i = 1; i <= row; i++) {
            for (int j = 1; j <= row-i; j++) {
                System.out.print(" ");
            }
            for (int k = 1; k <= i; k++) {
                System.out.print(k);
            }
            for(int l=1; l<i;l++){
                System.out.print(i-l);
            }
            System.out.println();
        }
        sc.close();
    }
}
