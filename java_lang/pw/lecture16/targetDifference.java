package pw.lecture16;
import java.util.Scanner;
import java.util.Arrays;
import pw.lecture16.ArrayMethods;
public class targetDifference {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int arr[] = ArrayMethods.get_input();
        System.out.print("Enter the target difference: ");
        int target = sc.nextInt();

        int left = 0;
        int right = 1;

        Arrays.sort(arr);
        while(right<arr.length) {
            if(arr[right] - arr[left]  == target) {
                System.out.println("Pair found "+arr[left]+" and "+arr[right]+" at indices "+ left+" and "+right);
                left++;
            }
            else if(arr[right] - arr[left] > target) {
                left++;
            }
            else {
                right++;
            }
        }
        sc.close();

    }
}
