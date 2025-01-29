package pw.lecture16;

import java.util.Scanner;
import java.util.Arrays;
import pw.lecture16.ArrayMethods;

public class TargetSumThree {
    public static void main(String[] args) {
        int arr[] = ArrayMethods.get_input();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the target sum: ");
        int target = sc.nextInt();
        int count = 0;
        for (int i = 0; i < arr.length - 2; i++) {
            for (int j = i + 1; j < arr.length - 1; j++) {
                for (int k = j + 1; k < arr.length; k++) {
                    if (arr[i] + arr[j] + arr[k] == target) {
                        System.out.println("The sum of " + arr[i] + ", " + arr[j] + " and " + arr[k] +
                                " on index " + i + ", " + j + ", and " + k +
                                " is equal to the target sum " + target);
                        count++;
                    }
                }
            }
        }

        System.out.println("The number of triplets equal to the target sum " + target + " is " + count);
        sc.close();
    }
}

