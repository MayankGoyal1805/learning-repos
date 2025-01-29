package pw.lecture12;
import pw.lecture12.CommonMethodsCalc;
import java.util.Scanner;

public class CalculatorUsingMathFuncts {
    public static void main(String[] args) {
      
        Scanner sc = new Scanner(System.in);
        CommonMethodsCalc.choice(); // Asking what to use for the operation
        int choice = sc.nextInt();
        CommonMethodsCalc.get_input();  // Asking for the input

        switch (choice) {
            case 1:
            CommonMethodsCalc.get_sum();
                break;

            default:
            System.out.println("Invalid choice");
            break;
        }

        sc.close();
    }
}
