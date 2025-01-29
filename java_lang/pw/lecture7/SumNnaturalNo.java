package pw.lecture7;

import java.util.Scanner;

public class SumNnaturalNo {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter a positive integer: ");
        int n = sc.nextInt();
        int sum = 0 , i = 0;

        while(i < n){
            sum += (i+1);
            i++;
        }
        System.out.println("The sum of "+n+" natural no. is "+sum);
        sc.close();
    }
}
