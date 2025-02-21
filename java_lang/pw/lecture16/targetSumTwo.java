package pw.lecture16;

import java.util.Arrays;
import java.util.Scanner;

import pw.lecture16.ArrayMethods;
public class targetSumTwo {
    public static void main(String[] args) {
        int arr[] = ArrayMethods.get_input();
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the target sum: ");
        int target = sc.nextInt();
        Arrays.sort(arr);
        int left = 0;
        int right = arr.length-1;
        while(left<right) {
            if(arr[left] + arr[right] == target){
                System.out.println("The sum of "+arr[left]+" and "+arr[right]+" on index "+left+" and "+right+" is equal to the target sum "+target);
                left++;
                right--;
            }
            else if(arr[left] + arr[right] < target) {
                left++;

            }
            else{
                right--;
            }
        }
        sc.close();
    }
}
