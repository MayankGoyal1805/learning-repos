package pw.R1_if_else_switch;
import java.util.Scanner;
public class divBy3and5 {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double n ;
        System.out.print("Enter the number: ");
        n = sc.nextDouble();
        if((n%3) == 0){
            System.out.println(n+" is divisible by 3");
        }
        else{
            System.out.println(n+" is not divisible by 3");
        };
        if(n%5 == 0){
            System.out.println(n+" is divisible by 5");
        }
        else{
            System.out.println(n+" is not divisible by 5");
        }
        if((n%3 == 0)&&(n%5 == 0)){
            System.out.println(n+" is divisible by both 3 and 5");
        }
        else{
            System.out.println(n+" is not divisible by both 3 and 5");
        }
           
        if((n%3 == 0)||(n%5 == 0)){
            System.out.println(n+" is divisible by either 3 or 5");
        }
        else{
            System.out.println(n+" is not divisible by either 3 or 5");
        }
        sc.close();
    }
}
