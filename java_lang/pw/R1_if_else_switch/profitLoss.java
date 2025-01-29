package pw.R1_if_else_switch;
import java.util.Scanner;

public class profitLoss {
    public static void main(String[] args) {
        double SP,CP,profit,loss;
        Scanner sc = new Scanner(System.in);
        System.out.println("What's the Cost Price of the item: ");
        CP = sc.nextDouble();
        System.out.println("What's the Selling Price of the item: ");
        SP = sc.nextDouble();
        if((SP-CP)<0){
            loss = CP-SP;
            System.out.println("You have incurred a loss of: "+loss);
        }
        else{
            profit=CP-SP;
            System.out.println("You have incurred a profit of: "+profit);
        }
        sc.close();
    }
}
