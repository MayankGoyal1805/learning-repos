package pw.lecture10;
import java.util.Scanner;
public class BinaryToDecimal {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the binary number: ");
        int binary = sc.nextInt();
        int n = binary;
        int x=0;

       for (int i = 0; n>0; i++) {
        x += (n%10) * Math.pow(2,i);
        n /= 10;
       }
       System.out.println(binary+" is "+x+" in decimal.");
       sc.close();
    }
}
