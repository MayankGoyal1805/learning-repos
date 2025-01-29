package pw.lecture16;

import java.util.Arrays;
import java.util.Scanner;

public class ArrayMethods {
    public static int[] get_input() {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of elements in the array: ");
        int n = sc.nextInt();
        int arr[] = new int[n];
        System.out.println("Enter the elements of array: ");
        for (int i = 0; i < n; i++) {
            arr[i] = sc.nextInt();
        }
        return arr;
    }

    public static void targetSumTw0(int arr[]) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the target sum: ");
        int target = sc.nextInt();
        Arrays.sort(arr);
        int left = 0;
        int right = arr.length - 1;
        while (left < right) {
            if (arr[left] + arr[right] == target) {
                System.out.println("The sum of " + arr[left] + " and " + arr[right] + " on index " + left + " and "
                        + right + " is equal to the target sum " + target);
                left++;
                right--;
            } else if (arr[left] + arr[right] < target) {
                left++;

            } else {
                right--;
            }
        }
        sc.close();
    }

}
