package pw.oops;

public class fraction {
    int num;
        int den;

        public void simplify() {
            int hcf = gcd(num, den);
            num = num / hcf;
            den = den / hcf;
        }

        public static int gcd(int num1, int num2) {
            if (num1 == 0) return num2;
            if (num2 == 0) return num1;
            if (num1 == num2) return num1;
            if (num1 > num2) {
                if (num1 % num2 == 0) return num2;
                return gcd(num1 - num2, num2);
            }
            if (num2 % num1 == 0) return num1;
            return gcd(num1, num2 - num1);
        }

        public fraction() {

        }

        public fraction(int num, int den) {
            if (den == 0) {
                System.out.println("Denominator can't be zero");
                return;
            }
            this.num = num;
            this.den = den;
            simplify();
        }

        public static fraction add(fraction f1, fraction f2) {
            return new fraction(f1.num * f2.den + f2.num * f1.den, f1.den * f2.den);
        }

        public static fraction multiply(fraction f1, fraction f2) {
            return new fraction(f1.num * f2.num, f1.den * f2.den);
        }

        public static fraction divide(fraction f1, fraction f2) {
            return multiply(f1, new fraction(f2.den, f2.num));
        }

        public static fraction subtract(fraction f1, fraction f2) {
            return new fraction(f1.num * f2.den - f2.num * f1.den, f1.den * f2.den);
        }

        public static void add2(fraction f1, fraction f2) {
            f1.num = f1.num * f2.den + f2.num * f1.den;
            f1.den = f1.den * f2.den;
            f1.simplify();
        }

}
