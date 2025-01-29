package pw.lecture9;
import java.util.Scanner;
public class rectangular_pattern {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length: ");
        int col = sc.nextInt();
        System.out.print("Enter the breadth: ");
        int row = sc.nextInt();

        // for(int i=1;i<=row;i++){
        //     if(i==1 || i==row){
        //         for(int j=1;j<=col;j++){
        //             System.out.print("*");
        //         }
        //         System.out.println();
        //     }
        //     else{
        //         System.out.print("*");
        //         for(int k=1;k<=col-2;k++) System.out.print(" ");
        //         System.out.print("*");
        //         System.out.println();
        //     }
        // } 

        // Two more efficient ways


        // one way
        // for(int i=1;i<=row;i++){
        //     for(int j=1;j<=col;j++){
        //         if(i==1 || j==1 || j== col || i==col){
        //             System.out.print("*");
        //         }
        //         else{
        //             System.out.print(" ");
        //         }
        //     }
        //     System.out.println();
        // }



        // second way
        String solidRow = "*".repeat(col);
        String hollowRow = "*"+" ".repeat(col-2)+"*";

        for(int i=1;i<=row;i++){
            if(i==1 || i==row){
                System.out.println(solidRow);
            }
            else{
                System.out.println(hollowRow);
            }
        }
        sc.close();
    }
}
