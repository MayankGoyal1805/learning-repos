package pw.R1_if_else_switch;
import java.util.Scanner;
public class grade {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double Marks;
        System.out.println("Enter the students marks: ");
        Marks = sc.nextDouble();

        if ((90<=Marks)&&(Marks<=100)){
            System.out.println("Excellent");
        }
        else if (80<=Marks) {
            System.out.println("Very Good");
        }
        else if (70<=Marks) {
            System.out.println("Good");
        }
        else if (60<=Marks) {
            System.out.println("Can do better");
        }
        else if (50<=Marks) {
            System.out.println("Average");
        }
        else if (40<=Marks) {
            System.out.println("Below average");
        }
        else if ((0<=Marks)&&(Marks<=40)) {
            System.out.println("Fail");
        };
        sc.close();
    }
}
