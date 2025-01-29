package pw.lecture9;
import java.util.Scanner;
public class ReverseTriangle {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row = sc.nextInt();

        for (int i = 0; i < row; i++) {
            for (int j = row-i; j>0; j--) {
                System.out.print("*");
            }
            System.out.println();
        }
        sc.close();
    }
}
