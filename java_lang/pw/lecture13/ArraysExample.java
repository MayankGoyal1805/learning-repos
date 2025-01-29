package pw.lecture13;

import java.util.Scanner;

public class ArraysExample {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        
        int age[] = new int [5];
        float weights[] = new float[5];
        String names[] = new String[5];

        // for (int i = 0; i < 5; i++) {
        //     System.out.println(i+1 +".");
        //     System.out.print("Enter the name: ");
        //     names[i] = sc.nextLine() ;
        //     System.out.print("Enter the age: ");
        //     age[i] = sc.nextInt();
        //     System.out.print("Enter the weight: ");
        //     weights[i] = sc.nextFloat();
        //     sc.nextLine();
        // }

        // for (int i = 0; i < 5; i++) {
        //     System.out.println(i+1 +".");
        //     System.out.println("Name: "+names[i]) ;
        //     System.out.println("Age: "+age[i]);
        //     System.out.println("Weight: "+weights[i]);
        // }
        System.out.println(age.length);
        

        sc.close();
    }
}
