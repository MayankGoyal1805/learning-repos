package pw.lecture9;

import java.util.Scanner;

public class OutlineTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row = sc.nextInt();

        for (int i = 1; i <= row; i++) {
            if (i == row) {
                for (int l = 1; l <= 2 * row - 1; l++) {
                    System.out.print(row);
                }
            } else {
                for (int j = 1; j <= row - i; j++) {
                    System.out.print(" ");
                }
                System.out.print(i);
                for (int k = 2; k < 2 * i - 1; k++) {
                    System.out.print(" ");
                }
                if (i != 1)
                    System.out.print(i);
            }
            System.out.println();
        }
        sc.close();


        // a much more efficient code 

        /*
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int n = sc.nextInt();
        for (int i = 1;i<=n;i++){
            for (int j = 1;j<=n-i;j++){
                System.out.print(" ");
            }
            for (int k = 1;k<=2*i-1;k++){
                if(k==1||k==2*i-1||i==n){
                System.out.print(i);
                }
                else{
                    System.out.print(" ");
                }
            }
         */
    }
}
