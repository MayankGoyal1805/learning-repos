package pw.lecture4;
import java.util.Scanner;
public class Input_onechar {
        public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the character that you want to print: ");
        char ch = sc.next().charAt(0);
        System.out.println("The character given as input is: " + ch);
        sc.close();
    }

}
