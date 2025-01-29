package pw.lecture7;

public class print1to50notMult3 {
    public static void main(String[] args) {
        int i = 1;
        // while (i <= 50) {
        //     if (i % 3 != 0)
        //         System.out.println(i);
        //     i++;
        // }

        for(;i<=50;i++){
            if(i%3 == 0) continue;
            System.out.println(i);
        }
    }
}
