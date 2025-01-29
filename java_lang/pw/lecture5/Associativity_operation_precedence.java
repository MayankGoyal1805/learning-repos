package pw.lecture5;

public class Associativity_operation_precedence {
    public static void main(String[] args) {
        System.out.println(4+2+"pqr");
        System.out.println("pqr"+4+2);

       Boolean p = false;
       Boolean q = false;
       Boolean r = true;
       
       System.out.println(p==q==r); //true

       // might look like the outcome should be false but the expression is evaluated from left to right. So p == q is false == false which is true and then it is true == true which true
    }
}
