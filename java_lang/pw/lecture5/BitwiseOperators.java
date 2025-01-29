package pw.lecture5;

public class BitwiseOperators {
    public static void main(String[] args) {
        int p=9 /* 00001001 */ , q=10; /* 00001010 */
        System.out.println(p|q); // 00001011 = 11
        System.out.println(p & q); // 00001000 = 8
        System.out.println(p ^ q); // 00000011 = 3

        System.out.println(p<<1); // 00010010 = 18
        System.out.println(p<<2); // 00100100 = 36

        System.out.println(q>>1); // 00000101 = 5
        System.out.println(q>>2); // 00000010 = 2

        System.out.println(~p); // 
    }
}