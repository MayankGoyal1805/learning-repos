package pw.lecture4;

import java.util.Scanner;

public class TakingInput {
    public static void main(String[] args) {
        // System.out.print prints without a newline and System.out.println prints with
        // a new line, that's just the only difference
        System.out.println("Enter you name");

        Scanner sc = new Scanner(System.in);

        // Scanner:
        // This is a Java class in the java.util package used for reading user input. It
        // provides methods to parse input into various types like int, double, String,
        // etc.
        // scanner:
        // This is the variable name. It refers to the instance of the Scanner class
        // that is created. You can use any name you like for the variable.
        // new Scanner(System.in):
        // This creates a new Scanner object.
        // System.in is Java's input stream that reads data from the keyboard.
        // The Scanner object wraps this input stream and provides convenient methods to
        // read and parse data.
        String name = sc.nextLine();

        // System.in.next only takes input till space, but System.in.nextLine takes
        // input of the whole line
        System.out.println("Enter the first integer you wish to add ");
        int num_1 = sc.nextInt();
        System.out.println("Enter the second integer you wish to add ");
        int num_2 = sc.nextInt();

        System.out.println(name + " the sum of these two integers is " + (num_1 + num_2));
        sc.close();

    }

}
