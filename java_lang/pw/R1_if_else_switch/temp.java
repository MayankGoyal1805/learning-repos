package pw.R1_if_else_switch;

public class temp {

    public static void main(String[] args) {
        int x = 3;
        String y = "3"; // String containing the number 3

        // This will cause a compile-time error
        if (x == Integer.parseInt(y)) {
            System.out.println("x and y are equal");
        } else {
            System.out.println("x and y are not equal");
        }
    }

}
