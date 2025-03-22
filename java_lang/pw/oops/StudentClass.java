package pw.oops;
import java.util.Scanner;

public class StudentClass {
    Scanner sc =  new Scanner(System.in);
    public static class Student {
        String name;
        int rno;
        double percent;
    }

    public static class Car{
        String name;
        String type;
        int price;
    }

    public static void main(String[] args) {

        Car c1 = new Car();
        c1.name = "Alto";
        c1.price = 4000000;
        c1.type = "hatchback";

        Student x = new Student();
        x.name = "Rohan";
        x.rno = 76;
        x.percent = 92.5;


    }
}
