package pw.oops;

public class Fractions {
    public static void main(String[] args) {
        fraction f1 = new fraction(4, 9);
        fraction f2 = new fraction(6, 18);

        fraction f3 = fraction.add(f1, f2);
        System.out.println(f3.num + "/" + f3.den);

        f3 = fraction.multiply(f1, f2);
        System.out.println(f3.num + "/" + f3.den);

        f3 = fraction.divide(f1, f2);
        System.out.println(f3.num + "/" + f3.den);

        f3 = fraction.subtract(f1, f2);
        System.out.println(f3.num + "/" + f3.den);

        fraction.add2(f1, f2);
        System.out.println(f1.num + "/" + f1.den);
    }
}