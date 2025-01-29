import java.util.Scanner;

public class temp {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        System.out.print("Enter the length: ");
        int col = sc.nextInt();
        System.out.print("Enter the breadth: ");
        int row = sc.nextInt();

        // Precompute the solid row and hollow row strings
        String solidRow = "*".repeat(col);
        String hollowRow = "*" + " ".repeat(col - 2) + "*";

        for (int i = 1; i <= row; i++) {
            if (i == 1 || i == row) {
                System.out.println(solidRow);
            } else {
                System.out.println(hollowRow);
            }
        }
        sc.close();
    }
}
