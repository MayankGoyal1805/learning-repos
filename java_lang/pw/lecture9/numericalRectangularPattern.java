package pw.lecture9;
import java.util.Scanner;
public class numericalRectangularPattern {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the number of rows: ");
        int row = sc.nextInt();

        for(int i=1;i<=row;i++){
            // This is one way
            // for(int j=1;j<=row+1-i;j++){
            //     System.out.print(j+i-1);
            // }
            for(int j=i;j<=row;j++){
                System.out.print(j);
            }
            for(int k=1;k<i;k++){
                System.out.print(k);
            }
            System.out.println();
        }
        sc.close();
    }
}
