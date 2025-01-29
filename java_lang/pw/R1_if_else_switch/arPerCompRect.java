package pw.R1_if_else_switch;
import java.util.Scanner;
public class arPerCompRect {
    public static void main(String[] args) {
        Scanner sc = new Scanner(System.in);
        double Length, Breadth , Perimeter , Area;
        System.out.println("Enter length of the Rectangle: ");
        Length = sc.nextDouble();
        System.out.println("Enter breadth of the Rectangle: ");
        Breadth = sc.nextDouble();
        Perimeter = 2*(Length+Breadth);
        Area = Length*Breadth;
        System.out.println("Perimeter of the rectangle is : "+Perimeter);
        System.out.println("Area of the rectangle is: "+Area);

        if(Area>Perimeter){
            System.out.println("Area has greater magnitude than the perimeter");
        }
        else if (Area == Perimeter) {
            System.out.println("Area and perimeter if have equal value");
        }
        else{
            System.out.println("Perimeter has greather magnitude than the area");
        }
        sc.close();
    }
}