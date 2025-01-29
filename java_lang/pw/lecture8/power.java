package pw.lecture8;
import java.util.Scanner;
public class power {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        int num , exp;
        System.out.print("Enter the number: ");
        num = sc.nextInt();
        System.out.print("Enter the exponent:");
        exp = sc.nextInt();
        System.out.println(num+"^"+exp+" = "+power(num,exp));
        System.out.println(Math.pow(num,exp));
        sc.close();

    }

    static int power(int a,int b){ 
        int p =1;

        for(int i=1;i<=b;i++){
            p *= a;
        }
        return p;

    }
}
