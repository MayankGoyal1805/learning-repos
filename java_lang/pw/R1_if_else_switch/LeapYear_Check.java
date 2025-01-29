package pw.R1_if_else_switch;
import java.util.InputMismatchException;
import java.util.Scanner;
public class LeapYear_Check {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int n;
        do{
            try{
                System.out.println("Enter the year to check if it's a leap year or not: ");
                n = sc.nextInt();
                while(n<0){
                    System.out.println("Please enter a valid positive year");
                    n = sc.nextInt();
                }

                if((n%4 == 0 && n%100 != 0) || (n%400 == 0)){
                    System.out.println(n+" is a leap year");
                }
                else{
                    System.out.println(n+" is not a leap year");
                }
            } catch(InputMismatchException e){
                System.out.println("Please enter a valid year");
                sc.nextLine();
                n = -1;
            }
        } while(n<0);
        sc.close();
    }    
}
