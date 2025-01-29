package pw.lecture8;

import java.util.Scanner;

public class SumOfThisSeries {
    public static void main(String[] args) {
        // 1-2+3-4+5-6+.....n
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the no. of digits of the series(1-2+3-4+5-6+.....n) : ");
        int n = sc.nextInt();
        int sum1 = 0, i = 1;

        for (; i <= n; i++) {
            if (i % 2 == 0) {
                sum1 -= i;
            } else {
                sum1 += i;
            }
        }
        System.out.println("Sum of the series fot n digits is: " + sum1);

        int sum2;

        if (n % 2 == 0) {
            sum2 = -n / 2;
        } else {
            sum2 = (n + 1) / 2;
        }
        System.out.println("Sum of the series fot n digits is: " + sum2);
        sc.close();
    }
}
