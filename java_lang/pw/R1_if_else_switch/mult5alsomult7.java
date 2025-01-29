package pw.R1_if_else_switch;

public class mult5alsomult7 {
    public static void main(String[] args) {
        int i = 0;
        while (i < (35 * 5)) {
            if ((i + 1) % 35 == 0) {
                int j = (i+1)/35;

                System.out.println(i+1 + " is the "+j+" multiple of 5 and 7");
                
            }
            i++;
        }
    }
}
